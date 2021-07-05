#!/usr/bin/python3
"""Module: Island Perimeter"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    for r in range(1, len(grid) - 1):
        for c in range(1, len(grid[r]) - 1):
            if grid[r][c] == 1:
                if grid[r][c - 1] == 0:
                    perimeter += 1
                if grid[r][c + 1] == 0:
                    perimeter += 1
                if grid[r - 1][c] == 0:
                    perimeter += 1
                if grid[r + 1][c] == 0:
                    perimeter += 1
    return perimeter
