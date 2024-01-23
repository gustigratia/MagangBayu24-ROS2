# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:msg/Num.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Num(type):
    """Metaclass of message 'Num'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.msg.Num')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__num
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__num
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__num
            cls._TYPE_SUPPORT = module.type_support_msg__msg__num
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__num

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Num(metaclass=Metaclass_Num):
    """Message class 'Num'."""

    __slots__ = [
        '_num1',
        '_num2',
        '_num3',
        '_opr1',
        '_opr2',
    ]

    _fields_and_field_types = {
        'num1': 'int64',
        'num2': 'int64',
        'num3': 'int64',
        'opr1': 'string',
        'opr2': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num1 = kwargs.get('num1', int())
        self.num2 = kwargs.get('num2', int())
        self.num3 = kwargs.get('num3', int())
        self.opr1 = kwargs.get('opr1', str())
        self.opr2 = kwargs.get('opr2', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.num1 != other.num1:
            return False
        if self.num2 != other.num2:
            return False
        if self.num3 != other.num3:
            return False
        if self.opr1 != other.opr1:
            return False
        if self.opr2 != other.opr2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def num1(self):
        """Message field 'num1'."""
        return self._num1

    @num1.setter
    def num1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num1 = value

    @property
    def num2(self):
        """Message field 'num2'."""
        return self._num2

    @num2.setter
    def num2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num2 = value

    @property
    def num3(self):
        """Message field 'num3'."""
        return self._num3

    @num3.setter
    def num3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num3' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num3' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num3 = value

    @property
    def opr1(self):
        """Message field 'opr1'."""
        return self._opr1

    @opr1.setter
    def opr1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'opr1' field must be of type 'str'"
        self._opr1 = value

    @property
    def opr2(self):
        """Message field 'opr2'."""
        return self._opr2

    @opr2.setter
    def opr2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'opr2' field must be of type 'str'"
        self._opr2 = value
