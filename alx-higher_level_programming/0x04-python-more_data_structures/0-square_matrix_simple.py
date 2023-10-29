#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    """
    computes the square of all int elements
    of a 2x2 matrix
    """
    new_matrix = []
    for col in matrix:
        square = list(map(lambda x: x**2, col))
        new_matrix.append(square)
    return new_matrix
