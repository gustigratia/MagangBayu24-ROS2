import rclpy
from rclpy.node import Node

from custom_interface.msg import Message


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription1 = self.create_subscription(
            Message,
            'topic1',
            self.listener_callback,
            10)
        self.subscription1  # prevent unused variable warning
        
        self.subscription2 = self.create_subscription(
            Message, 
            'topic2',
            self.listener_callback,
            10)
        self.subscription2

    def listener_callback(self, msg):
        result = msg.data1 and msg.data2
        if result:
            self.get_logger().info("pub1 - %s | pub2 - %s -> sudah siap nih, gass min!" % (msg.data1, msg.data2))
        else:
            self.get_logger().info("pub1 - %s | pub2 - %s -> tunggu dulu, kami belum ready!" % (msg.data1, msg.data2))




def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()