#!/usr/bin/python3

def search_replace(my_list, search, replace):
    """
    replaces all occurences of an
    element by another in a new list
    """
    new_list = []
    for item in my_list:
        if item == search:
            new_list.append(replace)
        else:
            new_list.append(search)
    return new_list
