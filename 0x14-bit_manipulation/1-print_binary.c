#include "main.h"

/**
  *print_binary - prints the binary rep of a number
  *@n: number to print in binary
  */
void print_binary(unsigned long int n)
{
	int a, b = 0;
	unsigned long int value;

	for (a = 63; a >= 0; a--)
	{
		value = n >> a;
		if (value & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
