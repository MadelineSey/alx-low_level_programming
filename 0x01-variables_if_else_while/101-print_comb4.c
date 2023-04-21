#include <stdio.h>
/**
  *main - entry point
  *description: print three digit combinations
  *Return: Always 0
  */
int main(void)
{
	int a, l, x;

	for (a = 48; a <= 57; a++)
	{
		for (l = 49; l <= 57; l++)
		{
			for (x = 50; x <= 57; x++)
			{
				if (x > l && l > a)
				{
					putchar(a);
					putchar(l);
					putchar(x);
					if (a != 55 || l != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
