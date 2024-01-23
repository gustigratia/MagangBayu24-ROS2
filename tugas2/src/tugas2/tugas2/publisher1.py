import rclpy
from rclpy.node import Node

from custom_interface.msg import Message
from std_msgs.msg import UInt32

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Message, 'topic1', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Message()
        time = UInt32()
        if self.i % 4 == 0:
            msg.data1 = True
        else:
            msg.data1 = False
        time.data = self.i
        self.publisher_.publish(msg)
        self.get_logger().info("Publisher - 1 - (%d sec) -> %s" % (time.data, msg.data1))
        self.i += 2


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()
    
    rclpy.spin(minimal_publisher)


    rclpy.shutdown()


if __name__ == '__main__':
    main()