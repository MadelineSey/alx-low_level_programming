#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - function that returns a pointer to a 2 dimensional array
  *of integers.
  *@width: width of the grid
  *@height: height of the grid
  *Return: pointer to a 2 dimensional array of integers
  */
int **alloc_grid(int width, int height)
{
	int a = 0, b = 0;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (; a < height; a++)
	{
		x[a] = malloc(sizeof(int) * width);
		if (x[a] == NULL)
		{
			for (; a >= 0; a--)
			free(x[a]);

			free(x);
			return (NULL);
		}
	}
	for (; a < height; a++)
	{
		for (; b < width; b++)
			x[a][b] = 0;
	}
	return (x);
}
