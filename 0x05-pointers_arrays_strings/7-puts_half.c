#include "main.h"

/**
  *puts_half - prints half of a string, then a new line
  *@str: string
  *Return: null
  */
void puts_half(char *str)
{
	int total, half;

	total = 0;
	while (str[total] != '\0')
		total++;
	half = total / 2;
	if (total % 2 == 1)
		half++;
	while (half < total)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
