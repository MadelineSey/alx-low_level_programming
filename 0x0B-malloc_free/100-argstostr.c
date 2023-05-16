#include "main.h"
#include <stdlib.h>

/**
  *argstostr - main entry
  *@ac: argument
  *@av: argument
  *Return: Always 0
  */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; a < ac; a++)
	{
		for (; av[a][b]; b++)
			d++;
	}
	d += ac;

	x = malloc(sizeof(char) * d + 1);

	if (x == NULL)
		return (NULL);
	for (; a < ac; a++)
	{
	for (; av[a][b]; b++)
	{
		x[c] = av[a][b];
		c++;
	}
	if (x[c] == '\0')
	{
		x[c++] = '\n';
	}
	}
	return (x);
}
