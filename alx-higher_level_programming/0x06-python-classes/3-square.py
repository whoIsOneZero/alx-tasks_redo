#!/usr/bin/python3

""" Define a class 'Square' """


class Square:
    """ Definition of a Squre."""

    def __init__(self, size=0):
        """ Initialize a Square instance.

        Args:
            size (int): The size of the new Square.
        """
        if isinstance(size, int):
            self.__size = size
        else:
            raise TypeError("size must be an integer")

        if size < 0:
            raise ValueError("size must be >= 0")

    def area(self):
        """ Calculate the area of the Square

        Return: the area
        """
        return (self.__size * self.__size)
