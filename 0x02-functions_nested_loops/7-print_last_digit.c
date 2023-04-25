#include "main.h"
/**
  *print_last_digit - prints last digits
  *@m: input number in question
  *Return: the value of the last digit
  */
int print_last_digit(int m)
{
	int ld;

	ld = m % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
