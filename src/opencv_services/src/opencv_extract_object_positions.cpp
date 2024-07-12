#include "rclcpp/rclcpp.hpp"
#include "yolov8_msgs/srv/yolo_inference.hpp"

using YoloInference = yolov8_msgs::srv::YoloInference;

class YoloInferenceForwarder : public rclcpp::Node {
public:
    YoloInferenceForwarder() : Node("yolo_inference_forwarder") {
        service_ = this->create_service<YoloInference>("yolo_inference_forward", std::bind(&YoloInferenceForwarder::yoloInferenceCallback, this, std::placeholders::_1, std::placeholders::_2));
        RCLCPP_INFO(this->get_logger(), "Yolo Inference forwarder ready.");
    }

private:
    void yoloInferenceCallback(const std::shared_ptr<YoloInference::Request> request, std::shared_ptr<YoloInference::Response> response) {
        response->roi = request->roi;
        RCLCPP_INFO(this->get_logger(), "Forwarding received ROI");
    }

    rclcpp::Service<YoloInference>::SharedPtr service_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<YoloInferenceForwarder>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}