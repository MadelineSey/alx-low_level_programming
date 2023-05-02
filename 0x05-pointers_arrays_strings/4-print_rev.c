#include "main.h"

/**
  *print_rev - print a string in reverse followed by a new line
  *@s: the string
  */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
		_putchar(s[a]);
	_putchar('\n');
}
