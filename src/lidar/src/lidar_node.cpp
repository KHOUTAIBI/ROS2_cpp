#include <memory>
#include <chrono>
#include "../include/serial.h"
#include "CYdLidar.h"
#include "ydlidar_config.h"
#include "rclcpp/rclcpp.hpp"
#include "lidar_interfaces/msg/lidar_scan.hpp"
#include <iostream>

using namespace std::chrono_literals;

class LidarNode : public rclcpp::Node {

    rclcpp::Publisher<lidar_interfaces::msg::LidarScan>::SharedPtr publisher_; // Publisher
    rclcpp::TimerBase::SharedPtr timer_; // Timer
    CYdLidar laser; // Laser scan instance
    std::string port; // Serial Port
    std::string arduino_port; // Arduino serial port
    std::vector<LaserPoint> points;
    int count_;
    int optval = 128000; // Baudrate
    bool response; // Response to the initialization

public:
    // Constructor
    LidarNode()
        : rclcpp::Node("lidar_publisher"), // Correctly call base class constructor
          count_(0) {
        // Initializing the port
        ydlidar::os_init();
        // Opening Port
        this->port = "/dev/ttyUSB0";
        // Setting the Lidar port
        this->laser.setlidaropt(LidarPropSerialPort, port.c_str(), port.size());
        laser.setlidaropt(LidarPropSerialBaudrate, &optval, sizeof(int));
        // Angle values
        float max_angle_values = 180.0f;
        float min_angle_values = -180.0f;
        // Setting the values to the lidar
        this->laser.setlidaropt(LidarPropMaxAngle, &max_angle_values, sizeof(float));
        this->laser.setlidaropt(LidarPropMinAngle, &min_angle_values, sizeof(float));
        float max_range_values = 16.f;
        float min_range_values = 0.1f;
        laser.setlidaropt(LidarPropMaxRange, &max_range_values, sizeof(float));
        laser.setlidaropt(LidarPropMinRange, &min_range_values, sizeof(float));
        // Getting the response of the lidar
        this->response = laser.initialize();
        if (response) {
            //Start the device scanning routine which runs on a separate thread and enable motor.
            response = laser.turnOn();
        }
        this->publisher_ = this->create_publisher<lidar_interfaces::msg::LidarScan>(
            "lidar_topic",
            10
        );
        this->timer_ = this->create_wall_timer(
            1ms,
            std::bind(&LidarNode::timer_callback, this)
        );
    }

private:
    void timer_callback() {
        // Lidar scan init
        LaserScan scan;
        // Checking if OK
        if (laser.doProcessSimple(scan)) {
            this->points = scan.points;
            auto message = std::make_shared<lidar_interfaces::msg::LidarScan>();
            // adding data to message
            for (const auto& point : points) {
                message->angle.push_back(point.angle);
                message->range.push_back(point.range);
                message->intensity.push_back(point.intensity);
                }
            RCLCPP_INFO(this->get_logger(), "Publishing the Lidar message");
            // Publishing the data
            this->publisher_->publish(*message);
        }
    }
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LidarNode>());
    rclcpp::shutdown();
    return 0;
}
