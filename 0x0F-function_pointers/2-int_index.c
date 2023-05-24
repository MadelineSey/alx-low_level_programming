#include <stdio.h>
#include "function_pointers.h"

/**
  *int_index - searches for an integer
  *@array: array
  *@cmp: pointer to the function
  *@size: number of elements in the array
  *Return: index of the first element for which the cmp function does
  *not return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;


	if (array == NULL || cmp == NULL)
		return (-1);

	for (; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
