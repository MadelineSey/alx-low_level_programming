#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees a 2 dimensional grid previously created
  *@grid: the two dimensional grid
  *@height: height of the grid
  *Return: Always 0
  */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
