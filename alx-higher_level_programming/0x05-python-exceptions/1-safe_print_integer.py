#!/usr/bin/python3

""" Safely prints an integer """

def safe_print_integer(value):
	try:
		print("{:d}".format(value))
	except (ValueError, TypeError):
		return (False)
	
	return (True)

