#!/usr/bin/python3

def common_elements(set_1, set_2):
    """
    new_list = []
    for a in list(set_1):
        for b in list(set_2):
            if a == b:
                new_list.append(a)
    return set(new_list)
    """
    return (set_1 & set_2)
