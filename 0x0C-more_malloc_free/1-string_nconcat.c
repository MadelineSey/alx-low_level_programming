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
	unsigned int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[c] != '\0')
		c++;
	if (n >= c)
		d = a + c;
	else
		d = a + n;

	x = malloc(sizeof(char) * d + 1);

	if (x == NULL)
		return (NULL);

	c = 0;
	while (b < d)
	{
		if (b <= a)
			x[b] = s1[b];
		if (b >= a)
		{
			x[b] = s2[c];
			c++;
		}
		b++;
	}
	x[b] = '\0';
	return (x);
}
