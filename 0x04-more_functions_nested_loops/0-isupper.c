#include "main.h"

/**
  *_isupper - check for uppercase character
  *@c: the character to be checked
  *Return: 1 if c is uppercase and 0 if otherwise
  */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
