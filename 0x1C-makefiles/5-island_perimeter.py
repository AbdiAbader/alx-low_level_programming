#!/usr/bin/python3
""" Island perimeter """


def island_perimeter(grid):
    """ island_perimeter """
    s = -1
    c = 0
    if len(grid) == 0:
        return 0
    else:
        for i in grid:
            for y in i:
                if y == 1:
                    c = c + 1
            s = s + c
        return s