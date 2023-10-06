# !/usr/bin/python3

# Prints a string in UPPERCASE
def uppercase(str):
    for alpha in str:
        value = ord(alpha)  # get int unicode
        if (value > 96 and value < 123):
            # change to uppercase here
            alpha = chr(value - 32)
            
        print("{}".format(alpha), end="")  # print all UPPERCASE
    print("")