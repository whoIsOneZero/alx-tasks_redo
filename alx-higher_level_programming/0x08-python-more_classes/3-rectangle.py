#!/usr/bin/python3
"""Defines a class Rectangle"""


class Rectangle:
    """Represents a Rectangle"""
    def __init__(self, width=0, height=0):
        """Initializes a new square

        Args:
            width(int): Width of the new rectangle
            height(int): Height of the new rectangle.
        """
        self.width = width
        self.height = height

    @property
    def width(self):
        """Get the width of the current rectangle"""
        return (self.__width)

    @width.setter
    def width(self, value):
        """Set the width of the current rectangle"""
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        elif value < 0:
            raise ValueError("width must be >= 0")
        # set the value otherwise
        self.__width = value

    @property
    def height(self):
        """Get the height of the current rectangle"""
        return (self.__height)

    @height.setter
    def height(self, value):
        """Set the height of the current rectangle"""
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        elif value < 0:
            raise ValueError("height must be >= 0")
        # set the value otherwise
        self.__height = value

    def area(self):
        """Returns the area of the rectangle"""
        return (self.__width * self.__height)

    def perimeter(self):
        """Returns the perimeter of the rectangle"""
        if (self.__width == 0) or (self.__height == 0):
            return 0
        return (2 * (self.__width + self.__height))

    def __str__(self):
        """Retuns a printable representation of the
        the Rectangle, with the "#" character
        """
        if (self.__width == 0) or (self.__height == 0):
            return ("")

        rect_shape = []
        for i in range(self.__height):
            [rect_shape.append('#') for j in range(self.__width)]
            if i != self.__height - 1:
                rect_shape.append("\n")
        return ("".join(rect_shape)) 
