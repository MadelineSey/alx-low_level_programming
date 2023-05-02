#include "main.h"

/**
  *swap_int - swap the value of two integers
  *@a: replace with address of b
  *@b: replace with address of a
  *Return: null
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
