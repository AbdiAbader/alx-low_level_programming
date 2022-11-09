#!/usr/bin/python3
""" Island perimeter """


def island_perimeter(grid):
    """ island_perimeter """
    s = 0
    c = 0
    if len(grid) == 0:
        return 0
    else:
        for x, i in enumerate(grid):
            c =0 
            for y in i:
                if y == 1:
                    c = c + 1
            s = (x * c) + s
        return s
