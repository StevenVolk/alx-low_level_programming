#!/usr/bin/python3
"""  returns the perimeter of the island described in grid """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])

    for i in range(0, rows-1):
        for j in range(0, columns-1):
            if grid[i, j] == 1:
                if i == 0 or grid[i-1, j] == 0:
                    perimeter += 1
                if i == rows-1 or grid[i+1, j] == 0:
                    perimeter += 1
                if j == 0 or grid[i, j-1] == 0:
                    perimeter += 1
                if j == columns-1 or grid[i, j+1] == 0:
                    perimeter += 1
    return perimeter
