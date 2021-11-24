#!/usr/bin/python3
"""Island Perimeter function"""

def island_perimeter(grid):
    """Function that returns the p"""
    p = 0
    rows = len(grid)

    if grid != []:
        columns = len(grid[0])
        for k in range(rows):
            for v in range(columns):
                        if grid[k][v] == 1:
                            if (k - 1) == -1 or grid[k - 1][v] == 0:
                                p += 1
                            if (k + 1) == rows or grid[k + 1][v] == 0:
                                p += 1
                            if (v - 1) == -1 or grid[k][v - 1] == 0:
                                p += 1
                            if (v + 1) == columns or grid[k][v + 1] == 0:
                                p += 1

    return p
