#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "opencv_services/parts_targets_pos.hpp"
#include <random>

class PositionServerNode : public rclcpp::Node {
public:
    PositionServerNode() : Node("position_server_node") {
        // Advertise the service
        service_ = this->create_service<opencv_services::srv::PartsTargetsPos>(
            "parts_targets_pos", std::bind(&PositionServerNode::handle_service, this, std::placeholders::_1, std::placeholders::_2));
        RCLCPP_INFO(this->get_logger(), "Service 'parts_targets_pos' is ready.");
    }

private:
    void handle_service(const std::shared_ptr<opencv_services::srv::PartsTargetsPos::Request> request,
                        std::shared_ptr<opencv_services::srv::PartsTargetsPos::Response> response) {
        // Generate a random point
        geometry_msgs::msg::Point random_point;
        random_point.x = get_random();
        random_point.y = get_random();
        random_point.z = get_random();

        // Set the random point as the response
        response->target_pos = random_point;
        RCLCPP_INFO(this->get_logger(), "Sending random target position: x=%f, y=%f, z=%f", random_point.x, random_point.y, random_point.z);
    }

    double get_random() {
        std::random_device rd;
        // Assuming the rest of the get_random function is implemented below
    }

    rclcpp::Service<opencv_services::srv::PartsTargetsPos>::SharedPtr service_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PositionServerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}