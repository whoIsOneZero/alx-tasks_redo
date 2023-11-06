#!/usr/bin/python3

def add_integer(a, b=98):
    """Return the integer sum of `a` and `b`

    Floats are typecasted to int before addition is performed.

    Raises:
        TypeError: `a` or `b` is not an int or float.
    """
    if ((not isinstance(a, int) and not isinstance(a, float))):
        raise TypeError("a must be an integer")
    if ((not isinstance(b, int) and not isinstance(b, float))):
        raise TypeError("b must be an integer")
    return (int(a) + int(b))
