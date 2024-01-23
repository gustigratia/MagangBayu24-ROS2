import rclpy
from rclpy.node import Node
import random

from tutorial_interfaces.msg import Num

operator = ['+', '-', '*', '/']

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Num, 'topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Num()
        msg.num1 = random.randint(1,10000)
        msg.num2 = random.randint(1,10000)
        msg.num3 = random.randint(1,10000)
        msg.opr1 = random.choice(operator)
        msg.opr2 = random.choice(operator)
        self.publisher_.publish(msg)
        self.get_logger().info("%d %s %d %s %d" % (msg.num1,msg.opr1, msg.num2, msg.opr2, msg.num3))
        


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
