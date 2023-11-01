#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - this allocates a grid, makes space and free space
 * @grid: this takes in the width of grid
 * @height: the height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)

{

	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
