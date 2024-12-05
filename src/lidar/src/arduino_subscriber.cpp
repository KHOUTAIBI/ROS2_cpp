#include <memory>
#include <chrono>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "lidar_interfaces/msg/lidar_scan.hpp"
#include "../include/serial.h"

using std::placeholders::_1;

class ArduinoNode : public rclcpp::Node {

    rclcpp::Subscription<lidar_interfaces::msg::LidarScan>::SharedPtr subscriber_; // Publisher
    const char* arduino_port; // Arduino serial port
    int file; //file opener
    int count_;

public:
    // Constructor
    ArduinoNode()
        : rclcpp::Node("lidar_subscription"), // Correctly call base class constructor
          count_(0) {
        // Opening Port
        this->arduino_port = "/dev/ttyACM0";
        // Configuring the port
        this->file = open_port(this->arduino_port);
        if (this->file < 0){
            std::cerr << "Could not successfuly open the port " << strerror(errno) << std::endl;
        }
        // Configuring the port according to the baudrate information
        bool configured = configure_serial_port(this->file, BAUDRATE);
        if (!configured){
            close(file);
            std::cerr << "Could not configure the baudrate of the port " << std::endl;
        }
        // Getting the response of the lidar
        this->subscriber_ = this->create_subscription<lidar_interfaces::msg::LidarScan>(
            "lidar_topic", 10, std::bind(&ArduinoNode::topic_callback, this, _1)   
            );
    }

private:
    void topic_callback(lidar_interfaces::msg::LidarScan::SharedPtr msg) const{
        // Sending msg through serial
        RCLCPP_INFO(this->get_logger(), "Publishing the Lidar message to the Arduino Board");
        write(this->file,&(msg->angle),sizeof(msg->angle));
        // Publishing the data
    }
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ArduinoNode>());
    rclcpp::shutdown();
    return 0;
}
