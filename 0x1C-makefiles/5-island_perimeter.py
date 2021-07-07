#!/usr/bin/python3
"""Perimeter of an island.

"""


def island_perimeter(grid):
    """Function that finde the perimeter of an island.
    Arg:
        grid: description of an island.
    Return the perimeter of an island.

    """
    perimeter_island = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                # condition to see if up is Zero
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter_island += 1
                # condition to see if at left is Zero
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter_island += 1
                # condition to see if down is Zero
                if i == (len(grid) - 1) or grid[i + 1][j] == 0:
                    perimeter_island += 1
                # condition to see if at right is Zero
                if j == (len(grid[0]) - 1) or grid[i][j + 1] == 0:
                    perimeter_island += 1
    return perimeter_island
