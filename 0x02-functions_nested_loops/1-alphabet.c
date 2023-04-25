#include "main.h"
/**
  *main - entry point
  *description: print alphabets in lower case
  *Return: Always 0 (success)
  */
void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
