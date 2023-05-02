#include "main.h"

/**
  *rev_string - reverses a string
  *@s: string
  *Return: reversed string
  */
void rev_string(char *s)
{
	char rev = s[0];
	int a = 0;
	int x;

	while (s[a] != '\0')
	a++;
	for (x = 0; x < a; x++)
	{
		a--;
		rev = s[x];
		s[x] = s[a];
		s[a] = rev;
	}
}
