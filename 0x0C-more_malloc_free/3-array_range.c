#include "main.h"
#include <stdlib.h>

/**
  *array_range - create an array of integers
  *@max: maximum number
  *@min: minimum number
  *Return: pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *x;
	int a = 0, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	x = malloc(sizeof(int) * b);

	if (x == NULL)
		return (NULL);

	for (; min <= max; a++)
		x[a] = min++;

	return (x);
}
