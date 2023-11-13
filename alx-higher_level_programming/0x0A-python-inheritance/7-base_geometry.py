#!/usr/bin/python3
"""Defines a class BaseGeometry"""


class BaseGeometry:
    """Representation of a BaseGeometry"""
    
    def area(self):
        """Raises an exception"""
        raise Exception("area() is not implemented")
    
    def integer_validator(self, name, value):
        """Args:
            name (str): The name of the parameter.
            value (int): The parameter to validate.
        Raises:
            TypeError: If value is not an integer.
            ValueError: If value is <= 0.
        """
        if not isinstance(value, int):
            raise TypeError("<name> must be an integer")
        if value <= 0:
            raise ValueError("<name> must be greater than 0")