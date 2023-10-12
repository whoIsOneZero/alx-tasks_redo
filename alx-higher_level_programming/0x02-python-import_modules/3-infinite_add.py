#!/usr/bin/python3

''' Prints the result of the addition of all arguments '''


if __name__ == "__main__":
	import sys
	
	total = 0
	#for i in range(len(sys.argv) - 1):
	#	total += int(sys.argv[i + 1])

	for arg in sys.argv[1:]:
		total += int(arg)

	print("{}".format(total))
