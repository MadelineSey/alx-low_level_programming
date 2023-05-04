#include "main.h"

/**
  *string_toupper - change all lowercase letters of the string to uppercase
  *@str: the string
  *Return: new string
  */
char *string_toupper(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] > 96 && str[x] < 123)
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}
