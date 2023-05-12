#include "main.h"
/**
  *_isalpha - checks for alphabetic character
  *@c: The character if lower or upper case
  *Return: Always 0 for other characters and 1 for lowercase characters
  */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
