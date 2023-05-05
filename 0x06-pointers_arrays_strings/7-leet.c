#include "main.h"

/**
  *leet - encodes a string to 1337
  *@x: the string
  *Return: pointer to the encoded string
  */
char *leet(char *x)
{
	int a = 0, b;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (x[a])
	{
		for (b = 0; b <= 7; b++)
		{
			if (x[a] == leet[b] || x[a] - 32 == leet[b])
				x[a] = b + '0';
		}
		a++;
	}
	return (x);
}
