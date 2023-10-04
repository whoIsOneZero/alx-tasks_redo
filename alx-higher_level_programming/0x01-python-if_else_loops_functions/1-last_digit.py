#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

# number = str(number)  #get the string representation
# last_dig = number[-1]  #get the last digit
# num = int(last_dig)  #type cast to int

last_digit = abs(number) % 10   # get the last digit directly
if (number < 0):
    last_digit = -last_digit

if (last_digit > 5):
    result = "and is greater than 5"
elif (last_digit < 6 and last_digit != 0):
    result = "and is less than 6 and not 0"
elif (last_digit == 0):
    result = "and is 0"

print(f"Last digit of {number} is {last_digit} {result}")
