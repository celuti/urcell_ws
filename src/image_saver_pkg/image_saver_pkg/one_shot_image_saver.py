import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class OneShotImageSaver(Node):
    def __init__(self):
        super().__init__('one_shot_image_saver')
        self.subscription = self.create_subscription(
            Image,
            '/realsense/image',
            self.listener_callback,
            10)
        self.bridge = CvBridge()
        self.image_received = False  # Add a flag to indicate image reception

    def listener_callback(self, msg):
        if not self.image_received:  # Check if an image has been received already
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            filename = self.generate_unique_filename('image.png')
            cv2.imwrite(filename, cv_image)
            self.get_logger().info(f'Saved image as {filename}')
            self.image_received = True  # Set the flag to True after saving the image
            # Shutdown after saving the image
            rclpy.shutdown()

    def generate_unique_filename(self, filename):
        base_name, extension = os.path.splitext(filename)
        counter = 1
        while os.path.exists(f"{base_name}_{counter}{extension}"):
            counter += 1
        return f"{base_name}_{counter}{extension}"

def main(args=None):
    rclpy.init(args=args)
    one_shot_image_saver = OneShotImageSaver()
    executor = rclpy.executors.SingleThreadedExecutor()
    executor.add_node(one_shot_image_saver)

    try:
        while rclpy.ok():
            rclpy.spin_once(one_shot_image_saver, executor=executor, timeout_sec=1.0)
            if one_shot_image_saver.image_received:
                break
    except KeyboardInterrupt:
        pass
    except Exception as e:
        one_shot_image_saver.get_logger().error(f'Encountered an error: {e}')
    finally:
        one_shot_image_saver.destroy_node()
        if rclpy.ok():  # Check if the context is still valid before shutting down
            rclpy.shutdown()

if __name__ == '__main__':
    main()