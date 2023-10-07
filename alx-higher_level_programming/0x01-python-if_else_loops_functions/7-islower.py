#!/usr/bin/python3

# Check for lowercase character
def islower(c):
    value = ord(c)
    if (value > 96 and value < 123):
        return True
    else:
        return False
