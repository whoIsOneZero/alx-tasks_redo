#!/usr/bin/python3

""" Define a class 'Square' """


class Square:
    """ Definition of a Squre."""

    def __init__(self, size=0, position=(0, 0)):
        """ Initialize a Square instance.

        Args:
            size (int): The size of the new Square.
            position (int, int): The coordinates of the Square.
        """
        self.__size = size
        self.__position = position

    @property  # getter
    def size(self):
        """ Get the size of the current Square instance."""
        return (self.__size)

    @size.setter
    def size(self, value):
        """ Set the size of the current Square instance."""
        if isinstance(value, int):
            self.__size = value
        else:
            raise TypeError("size must be an integer")

        if value < 0:
            raise ValueError("size must be >= 0")

    @property
    def position(self):
        """ Get the position of the current Square instance."""
        return (self.__position)

    @position.setter
    def position(self, value):
        """ Set the position of the current Square instance."""
        if (isinstance(value, tuple) or
            len(value) != 2 or
            all(isinstance(num, int) for num in value) or
            all(num >= 0 for num in value)):
            self._position = value
        else:
            raise TypeError("position must be a tuple of 2 positive integers")

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
            for a in range(0, self.__position[1]):
                print()
            for i in range(self.__size):
                for j in range(0, self.position[0]):
                    print(" ", end="")
                for j in range(self.__size):
                    print("#", end="")
                print()
