#include "main.h"

/**
  *print_line - draw a straight line in the terminal
  *@n: number of times _n should be printed
  *Return: \n if n is 0 or less
  */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
