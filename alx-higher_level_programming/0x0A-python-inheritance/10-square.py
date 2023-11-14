#!/usr/bin/python3
"""Defines a class Square that inherits from Rectangle"""
Rectangle = __import__('9-rectangle').Rectangle

class Square(Rectangle):
    """Representation of Square"""
    
    def __init__(self, size):
        """Initialize a new Square.

        Args:
            size (int): The length of a side of the square
        """
        self.integer_validator("size", size)
        super().__init__(size, size)
        self.__size = size
