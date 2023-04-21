#include <stdio.h>
/**
  *main - entry point
  *description: 'print alphabets'
  *Return: Always 0 (success)
  */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
