#include "main.h"
#include <stdlib.h>

/**
  *create_array - function that creates an array of chars,
  *and initializes it with a specific char.
  *@size: size of the array
  *@c: char to fill the array
  *Return: a pointer to the array, or NULL if size is equal to 0.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *b;

	b = malloc(size * sizeof(char));

	if (size == 0 || b == NULL)
		return (NULL);
	for (; a < size; a++)
	{
		b[a] = c;
	}
	return (b);
}
