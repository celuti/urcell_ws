#!/usr/bin/env python3

from ultralytics import YOLO
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

from yolov8_msgs.msg import InferenceResult
from yolov8_msgs.msg import Yolov8Inference
from yolov8_msgs.srv import YoloInference

bridge = CvBridge()

class Camera_subscriber(Node):

    def __init__(self):
        super().__init__('camera_subscriber')
        
        self.model = YOLO('~ws/urcell_ws/src/yolobot_recognition/scripts/best.pt') # ojo con la ruta!!

        self.yolov8_inference = Yolov8Inference()

        self.subscription = self.create_subscription(
            Image,
            #'rgb_cam/image_raw',
            'realsense/image',
            self.camera_callback,
            10)
        # Create server to publish inference results
        self.create_service(YoloInference, "/yolo_inference", self.yolov8_callback)
        self.yolov8_pub = self.create_publisher(Yolov8Inference, "/Yolov8_Inference", 1)
        self.img_pub = self.create_publisher(Image, "/inference_result", 1)
        self.internal_image = None

    def yolov8_callback(self, request, response):
        if self.internal_image:
            img = bridge.imgmsg_to_cv2(self.internal_image, "bgr8")
            results = self.model(img)

            self.yolov8_inference.header.frame_id = "inference"
            self.yolov8_inference.header.stamp = camera_subscriber.get_clock().now().to_msg()

            for r in results:
                boxes = r.boxes
                for box in boxes:
                    self.inference_result = InferenceResult()
                    b = box.xyxy[0].to('cpu').detach().numpy().copy()  # get box coordinates in (top, left, bottom, right) format
                    c = box.cls
                    self.inference_result.class_name = self.model.names[int(c)]
                    self.inference_result.top = int(b[0])
                    self.inference_result.left = int(b[1])
                    self.inference_result.bottom = int(b[2])
                    self.inference_result.right = int(b[3])
                self.yolov8_inference.yolov8_inference.append(self.inference_result)
            
            response.segmentation = self.internal_image
            response.roi.x_offset = self.inference_result.left
            response.roi.y_offset = self.inference_result.right
            response.roi.height = self.inference_result.bottom
            response.roi.width = self.inference_result.top            

            self.img_pub.publish(self.internal_image)
            self.yolov8_pub.publish(self.yolov8_inference)
        
        # create response
        return response
    
    def camera_callback(self, data):
        # img = bridge.imgmsg_to_cv2(data, "bgr8")
        self.internal_image = data
        return

if __name__ == '__main__':
    rclpy.init(args=None)
    camera_subscriber = Camera_subscriber()
    rclpy.spin(camera_subscriber)
    rclpy.shutdown()
