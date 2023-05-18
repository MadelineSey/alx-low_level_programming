#include "main.h"
#include <stdlib.h>

/**
  **string_nconcat - concatenates two strings
  *@s1: string one
  *@s2: string two
  *@n: number of bytes of s2
  *Return: point to a newly allocated space in memory which contains the
  *contents of s1, followed by the contents of s2, and null terminated
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a = 0, b = 0, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[c] != '\0')
		c++;i

	x = malloc(sizeof(char) * (a + b) + 1);

	if (x == NULL)
		return (NULL);

	c = 0;

	while (s1[a] != '\0')
	{
		x[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
