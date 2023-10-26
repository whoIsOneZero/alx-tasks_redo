#!/usr/bin/python3

""" Define a class 'Square' """


class Square:
    """ Definition of a Squre."""

    def __init__(self, size=0):
        """ Initialize a Square instance.

        Args:
            size (int): The size of the new Square.
        """
        self.__size = size

    @property  # getter
    def size(self):
        """ Get the size of the current Square instance."""
        return (self.__size)

    @size.setter
    def size(self, size):
        """ Set the size of the current Square instance."""
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

    def my_print(self):
        """ Print in stdout the square with #"""
        if self.__size == 0:
            print()
        else:
            for i in range(self.__size):
                for j in range(self.__size):
                    print("#", end="")
                print()
