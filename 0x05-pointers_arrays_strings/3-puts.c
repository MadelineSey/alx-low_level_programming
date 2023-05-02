#include "main.h"

/**
  *_puts - print a string followed by a new line
  *@str: string
  *Return: string, new line
  */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
		_putchar('\n');
}
