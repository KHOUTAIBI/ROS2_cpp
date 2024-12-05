#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "cpp_interfaces/msg/custom.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"

using std::placeholders::_1;

class SubpubMember : public rclcpp::Node {

rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr subscription_;
rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr publisher_;

public: SubpubMember() : Node("Node_3"){

    publisher_ = this->create_publisher<std_msgs::msg::Float32MultiArray>("topic_1", 10);    
    subscription_ =  this->create_subscription<std_msgs::msg::Float32MultiArray>(
      "topic", 10, std::bind(&SubpubMember::topic_callback, this, _1));
    }

    // Method to callback the functions
    private : void topic_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg){
        RCLCPP_INFO(this->get_logger(), "I heard: '%f'", msg->data);
        RCLCPP_INFO(this->get_logger(),"I am publishing : %f", msg->data);
        publisher_->publish(*msg);
        return;
    }
};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SubpubMember>());
    rclcpp::shutdown();
    return 0;
}

