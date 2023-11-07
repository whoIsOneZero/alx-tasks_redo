#!/usr/bin/python3
"""Defines a square-printing function"""

def print_square(size):
    """
    Print a square with `#` character

    Args:
        size (int): The length of the square.

    Raises:
        TypeError: Size is not an integer
        ValueError: Size < 0
    """
    if not isinstance(size, int):
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")

    for i in range(size):
        [print("#", end="") for j in range(size)]
        print("")
