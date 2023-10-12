#!/usr/bin/python3

''' Prints the number of and list of arguments '''


if __name__ == "__main__":
    import sys

    len_argv = len(sys.argv) - 1

    if len_argv == 0:
        print("{} arguments.".format(len_argv))
    elif len_argv == 1:
        print("{} argument:".format(len_argv))
        print("1: {}".format(sys.argv[1]))
    else:
        print("{} arguments:".format(len_argv))
        for i in range(len_argv):  # skip argv[0]
            print("{}: {}".format(i + 1, sys.argv[i + 1]))
