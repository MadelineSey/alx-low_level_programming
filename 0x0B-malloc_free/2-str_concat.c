#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*Return: point to a newly allocated space in memory which contains the
*contents of s1, followed by the contents of s2, and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	x = malloc(sizeof(char) * (a + b + 1));

	if (x == NULL)
		return (NULL);

	while (s1[a] != '\0')
	{
		x[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		x[a] = s2[b];
		a++, b++;
	}
	x[a] = '\0';
		return (x);
}
