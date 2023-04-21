#include <stdio.h>
/**
  *main - entry point
  *description: print lowercase and uppercase
  *Return: Always 0 (success)
  */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
