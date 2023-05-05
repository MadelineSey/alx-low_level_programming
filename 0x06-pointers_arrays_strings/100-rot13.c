#include "main.h"

/**
 *rot13 - encodes a string using rot13
 *@s: the string
 *Return: the pointer to dest
 */

char *rot13(char *s)
{
	int a, b;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (s[a] == x[b])
			{
				s[a] = y[b];
				break;
			}
		}
	}

	return (s);
}
