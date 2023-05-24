#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - executes a function given as a parameter on each element
  *@array: the array
  *@size: size of the array
  *@action: pointer to the function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array == NULL || action == NULL)
		return;

	for (; a < size; a++)
		action(array[a]);
}
