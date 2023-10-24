#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
	my_tuple = ()
	one = tuple_a + (0, 0)
	two = tuple_b + (0, 0)
	my_tuple = (one[0] + two[0], one[1] + two[1])

	return (my_tuple)
