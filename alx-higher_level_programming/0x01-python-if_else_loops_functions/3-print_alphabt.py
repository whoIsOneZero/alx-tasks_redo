#!/usr/bin/python3
# All alphabet in lowercase, no new line

for i in range(97, 123):
    if (chr(i) == 'q' or chr(i) == 'e'):
        continue
    print("{}".format(chr(i)), end="")
