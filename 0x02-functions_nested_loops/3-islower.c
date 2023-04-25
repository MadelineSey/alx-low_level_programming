#include "main.h"
/**
  *_islower - checks for lowercase character c in ASCII code
  *@c: The character
  *Return: Always 1 for lowercase character. 0 for other characters.
  */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
