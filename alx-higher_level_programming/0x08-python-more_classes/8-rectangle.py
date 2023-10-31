#!/usr/bin/python3
"""Defines a class Rectangle"""


class Rectangle:
    """Represents a rectangle

        Attributes:
        number_of_instances (int): Num. of times Rectangle
            is instantiated
        print_symbol (any): Symbol to be used to represent the Rectangle
    """
    number_of_instances = 0
    print_symbol = "#"

    def __init__(self, width=0, height=0):
        """Initializes a new square

        Args:
            width(int): Width of the new rectangle
            height(int): Height of the new rectangle.
        """
        type(self).number_of_instances += 1
        # associated with the type of the instance
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

    @staticmethod
    def bigger_or_equal(rect_1, rect_2):
        """
        Return rectangle with the biggest area

        Args:
            rect_1 (Rectangle): The first Rectangle
            rect_2 (Rectangle): The second Rectangle

        Raises:
            TypeError - if rect_1 or rect_2 isn't a Rectangle
        """
        if not isinstance(rect_1, Rectangle):
            raise TypeError("rect_1 must be an instance of Rectangle")
        if not isinstance(rect_2, Rectangle):
            raise TypeError("rect_2 must be an instance of Rectangle")
        if rect_1.area() >= rect_2.area():
            return (rect_1)
        return (rect_2)

    def __str__(self):
        """Returns a printable representation of the
        the Rectangle, with the 'print_symbol' character
        """
        if (self.__width == 0) or (self.__height == 0):
            return ("")

        rect = []
        for i in range(self.__height):
            [rect.append(str(self.print_symbol)) for j in range(self.__width)]
            if i != self.__height - 1:
                rect.append("\n")
        return ("".join(rect))

    def __repr__(self):
        """Returns a string representation of the Rectangle"""
        rect = "Rectangle(" + str(self.__width)
        rect += ", " + str(self.__height) + ")"
        return (rect)

    def __del__(self):
        """
        Print a message when a
        Rectangle instance is deleted
        """
        type(self).number_of_instances -= 1
