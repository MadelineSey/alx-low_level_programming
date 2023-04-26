#include "main.h"
/**
  *print_times_table - prints the n times table, start from zero
  *@n: The number to be multiplies
  *Return: nothing if the number is greater than 15 or less than zero
  */
void print_times_table(int n)
{
	int q, r, s;

	if (n >= 0 && n <= 15)
	{
		for (q = 0; q <= n; q++)
		{
			_putchar('0');
			for (r = 1; r <= n; r++)
			{
				_putchar(',');
				_putchar(' ');
				s = q * r;
				if (s <= 99)
					_putchar(' ');
				if (s <= 9)
					_putchar(' ');
				if (s >= 100)
				{
					_putchar((s / 100) + 48);
					_putchar(((s / 10)) % 10 + 48);
				}
				else if (s <= 99 && s >= 10)
				{
					_putchar((s / 10) + 48);
				}
					_putchar((s % 10) + 48);
				}
			_putchar('\n');
		}
	}
}

