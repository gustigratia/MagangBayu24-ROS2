import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class MinimalPublisher(Node):
    
    def __init__(self):
        super().__init__("minimal_publisher")
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        timer_period = 1 # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        if self.i<6:
            if self.i % 2 == 0:
                msg = Twist()
                msg.angular.z = 2.125
            else:
                msg = Twist()
                msg.linear.x = 5.0
        elif self.i >= 6 and self.i < 12:
            if self.i % 2 == 1:
                msg = Twist()
                msg.angular.z = 3.16
                msg.linear.x = 7.1
            elif self.i == 6:
                msg=Twist()
                msg.angular.z = 0.45
            else:
                msg=Twist()
                msg.angular.z = -1.3
        
        self.i += 1
        self.publisher.publish(msg)
    
def main(args=None):
    rclpy.init(args=args)
    minimal_publisher = MinimalPublisher()
    rclpy.spin(minimal_publisher)
    
    minimal_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    
   