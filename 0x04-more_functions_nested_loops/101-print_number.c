#include "main.h"
#include <stdio.h>
/**
  *print_number - print an integer
  *@n: the character in question
  *Return: Always 0
  */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m *= -1;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
