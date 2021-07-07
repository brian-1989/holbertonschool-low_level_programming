#!/usr/bin/python3
"""Perimeter of an island.

"""


def island_perimeter(grid):
    """Function that finde the perimeter of an island.
    Arg:
        grid: description of an island.
    Return the perimeter of an island.

    """
    count_of_1 = 1
    for i in range(0, len(grid)):
        if len(grid) > 101 and len(grid[i]) > 101:
            return
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                count_of_1 += 1
    return (2 * count_of_1)
