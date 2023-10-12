#!/usr/bin/python3

''' file usable as a script as well as an importable module '''


if __name__ == "__main__":
    from add_0 import add
    a = 1
    b = 2

    print(f"{a} + {b} = {add(a, b)}")
