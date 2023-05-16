#include "main.h"
#include <stdlib.h>

/**
  *_strdup - function that returns a pointer to a new string
  *@str: string to be duplicated
  *Return: a pointer to the duplicated string and NULL if insufficient memory.
  */
char *_strdup(char *str)
{
	char *x;
	int a = 0, b = 0;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	x = malloc((sizeof(char) * a) + 1);

	if (x == NULL)
		return (NULL);

	for (; str[b]; b++)
		x[b] = str[b];
	x[a] = '\0';
	return (x);
}
