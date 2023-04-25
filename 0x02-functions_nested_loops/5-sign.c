#include "main.h"
/**
  *print_sign - a function that prints the sign of a number
  *@n: The number in question
  *Return: Always 1 for positive number greater than zero, 0 if number is zero,
  *-1 for negative number less than zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
