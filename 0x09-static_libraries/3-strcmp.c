#include "main.h"

/**
  *_strcmp - compares two functions
  *@s1: pointer to the first string
  *@s2: pointer to the second string
  *Return: Always 0
  */
int _strcmp(char *s1, char *s2)
{
	int x, y;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0')
	{
		x++;
	}
	y = s1[x] - s2[x];
	return (y);
}
