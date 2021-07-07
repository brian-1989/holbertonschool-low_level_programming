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
        if len(grid) > 101 and len(grid[i]) > 101:
            return
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                # condition to see if up is Zero
                if i is 0 or grid[i - 1][j] is 0:
                    perimeter_island += 1
                # condition to see if at left is Zero
                if j is 0 or grid[i][j - 1] is 0:
                    perimeter_island += 1
                # condition to see if down is Zero
                if i is len(grid) or grid[i + 1][j] is 0:
                    perimeter_island += 1
                # condition to see if at right is Zero
                if j is len(grid[0]) or grid[i][j + 1] is 0:
                    perimeter_island += 1
    return perimeter_island
