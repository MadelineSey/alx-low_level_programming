#include "main.h"

/**
  *reverse_array - reverses an array
  *@a: the array
  *@n: the number of elements of the array
  *Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
