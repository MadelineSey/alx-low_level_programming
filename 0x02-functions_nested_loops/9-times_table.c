#include "main.h"
/**
  *times_table - print nine times table starting with 0
  *Return: nothing
  *
  */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		_putchar(48);
		for (y = 1; y < 10; y++)
		{
			_putchar(',');
			_putchar(' ');
			z = x * y;
			if (z < 10)
				_putchar(' ');
			else
				_putchar((z / 10) + 48);
			_putchar((z % 10) + 48);
		}
		_putchar('\n');
	}
}
