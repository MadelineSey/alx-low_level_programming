#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *_print - moves a string one place to the left and prints the string
  *@str: the string
  *@l: size of string
  *Return: Always 0
 */
void _print(char *str, int l)
{
	int a = 0, b = 0;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
	free(str);
}

/**
 *mul - multiplies a char with a string and places the answer into dest
 *@n: char to multiply
 *@num: string to multiply
 *@num_index: last non NULL index of num
 *@dest: destination of multiplication
 *@dest_index: highest index to start addition
 *Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;

	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 *check_for_digits - checks the arguments to ensure they are digits
 *@av: pointer to arguments
 *Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
				return (1);
		}
	}
	return (0);
}


/**
 *init - initializes a string
 *@l: length of string
 *Return: Always 0
 *@str: string
 */
void init(char *str, int l)
{
	int a = 0;

	for (; a < l; a++)
		str[a] = '0';
	str[a] = '\0';
}


/**
 *main - multiply two numbers
 *@argc: argument counter
 *@argv: argument vector
 *Return: Zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *x;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;

	x = malloc(ln * sizeof(char));

	if (x == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(x, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, x, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(x);
			exit(98);
		}
	}
	_print(x, ln - 1);
	return (0);
}
