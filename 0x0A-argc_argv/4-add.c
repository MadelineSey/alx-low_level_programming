#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *main - adds positive numbers
  *@argc: argument counter
  *@argv: argument vector
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int a = 1;
	unsigned int b, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (; a < argc; a++)
		{
			c = argv[a];

			for (b = 0; b < strlen(c); b++)
			{
				if (c[b] < 48 || c[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
