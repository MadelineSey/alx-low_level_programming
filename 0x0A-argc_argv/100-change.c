#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *main - prints the minimum number of coins to
  *make change for an amount of money
  *@argc: number of arguments
  *@argv: array of arguments
  *Return: 1; if the number of arguments passed is not exactly 1, print Error
  */
int main(int argc, char *argv[])
{
	int x, y, z;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	z = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= coins[y])
		{
			z++;
			x -= coins[y];
		}
	}
	printf("%d\n", z);
	return (0);
}
