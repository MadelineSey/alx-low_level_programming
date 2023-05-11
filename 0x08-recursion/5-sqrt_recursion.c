#include "main.h"

int find_sqrt(int x, int y);
int _sqrt_recursion(int n);

/**
 *find_sqrt - Finds the natural square root of a number
 *@x: the numer
 *@y: the root
 *Return: -1; If n does not have a natural square root
 */
int find_sqrt(int x, int y)
{
	if ((y * y) == x)
		return (y);
	if (y == x / 2)
		return (-1);
	return (find_sqrt(x, y + 1));
}
/**
 *_sqrt_recursion - Returns the natural square root of a number n
 *@n: The number
 *Return: -1 ; if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (find_sqrt(n, y));
}
