#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - sums of all its parameters
  *@n: the number of arguments
  *Return: the sum of all its parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (; x < n; x++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
