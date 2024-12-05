#!/usr/bin/env python3
from lidar_interfaces.msg import LidarScan
import rclpy
from threading import Lock
from rclpy.node import Node
import matplotlib.pyplot as plt

# Class for Lidar subscription and plotting  
class LidarSubscriptionNode(Node):
    def __init__(self):
        super().__init__("lidar_subscription_node")
        
        # Lidar data storage
        self.ranges = []
        self.angles = []
        self.intensity = []
        self.lock = Lock()  # To synchronize access to data


        self.figure, self.ax = plt.subplots(subplot_kw={'projection': 'polar'})
        self.ax.set_rmax(40)
        self.ax.grid()


        self.subscriber_ = self.create_subscription(
            LidarScan,
            "lidar_topic",
            self.topic_callback,
            10
        )

    def topic_callback(self, msg: LidarScan):
        self.get_logger().info(f"Received The Following range data: {msg.range}")
        
        # Update data
        with self.lock:
            self.ranges = msg.range
            self.angles = msg.angle
            self.intensity = msg.intensity

        self.update_plot()

    def update_plot(self):
        with self.lock:  
            self.ax.clear()
            self.ax.set_rmax(40)
            self.ax.grid()
            if self.angles and self.ranges:
                self.ax.scatter(self.angles, self.ranges, c=self.intensity, cmap='hsv', alpha=0.95)

        # Refresh the plot
        plt.draw()
        plt.pause(0.001)

def main(args=None):
    rclpy.init(args=args)
    node = LidarSubscriptionNode()
    try:
        rclpy.spin(node)  # Run the ROS 2 node
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
