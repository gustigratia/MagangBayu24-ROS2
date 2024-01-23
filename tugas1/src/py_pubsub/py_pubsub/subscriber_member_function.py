import rclpy
from rclpy.node import Node
import operator

from tutorial_interfaces.msg import Num

operators = {'+': operator.add, '-': operator.sub, '*': operator.mul, '/': operator.truediv}

def calculate(number1, op1, number2, op2, number3):
    res1 = operators[op1](number1,number2)
    res2 = operators[op2](res1, number3)
    return res2

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Num,
            'topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        result = calculate(msg.num1, msg.opr1, msg.num2, msg.opr2, msg.num3)
        self.get_logger().info("%d %s %d %s %d = %s" % (msg.num1, msg.opr1, msg.num2, msg.opr2, msg.num3, result))


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
