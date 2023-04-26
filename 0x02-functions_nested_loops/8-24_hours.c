#include "main.h"
/**
  *jack_bauer - prints every minute of the day of Jack Bauer, start from 00:00
  *Return: nothing
  *
  */
void jack_bauer(void)
{
	int m, n, o, p;

	for (m = 0; m < 3; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if ((m < 2 && n <= 9) || (m < 3 && n <= 3))
			{
				for (o = 0; o < 6; o++)
				{
					for (p =  0; p < 10; p++)
					{
						_putchar(m + 48);
						_putchar(n + 48);
						_putchar(58);
						_putchar(o + 48);
						_putchar(p + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
