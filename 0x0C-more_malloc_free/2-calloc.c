#include "main.h"
#include <stdlib.h>

/**
  *_calloc - allocates memory for an array of nmemb elements of size bytes
  *@nmemb: allocate memory for array
  *@size: size bytes
  *Return: pointer to the allocated memory.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);

	if (x == NULL)
		return (NULL);

	for (; a < (nmemb * size); a++)
		x[a] = 0;
	return (x);
}
