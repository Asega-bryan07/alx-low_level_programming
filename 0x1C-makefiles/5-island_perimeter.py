#!/usr/bin/python3

# Technical interview preparation:
#
# You are not allowed to google anything
# Whiteboard first
# Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
#
# grid is a list of list of integers:
# 0 represents a water zone
# 1 represents a land zone
# One cell is a square with side length 1
# Grid cells are connected horizontally/vertically (not diagonally).
# Grid is rectangular, width and height don’t exceed 100
# Grid is completely surrounded by water, and there is one island (or nothing).
# The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
# Requirements:
#
# First line contains #!/usr/bin/python3
# You are not allowed to import any module
# Module and function must be documented\

""" module that calculates perimeter of an island in a grid"""

def num_water_neighbors(grid, i, j):
    """return number of water neighborsa cell that has a grid"""
    num = 0

    if i <= 0 or not grid[i - 1][j]:
            num +=1

    if j <= 0 or not grid[i][i - 1]:
            num +=1

    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
            num += 1

    if i >= len(grid[i]) - 1 or not grid[i + 1][j]:
            num += 1
    return num

def island_perimeter(grid):
    """Returns The parameter of the island grid"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += num_water_neighbors(grid, i, j)
    return perimeter



