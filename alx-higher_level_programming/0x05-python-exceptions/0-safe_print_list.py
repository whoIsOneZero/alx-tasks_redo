#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
	""" Prints x elements of a list.

	Args:
		my_list(list): List whose elements is to be printed
		x (int): Number of elements to print

	Returns:
		Actual num of elements printed.
	"""
	num = 0
	
	for i in range(x):
		try:
			print("{}".format(my_list[i]), end="")
			num += 1
		except IndexError:
			break
		
	print()
	return (num)
