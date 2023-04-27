#include "main.h"

/**
  *print_diagonal - draw diagonal lines on the terminal
  *@n: the number of times to print \
  *Return: \n if n is 0 or less
  */
void print_diagonal(int n)
{
	int m, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
	{
		for (s = 0; s < m; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
