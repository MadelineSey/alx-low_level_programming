#include <stdio.h>

/**
  *main - prints its name, followed by a new line
  *@argc: argument counter
  &@argv: argument vector
  *Return: print the new name, without having to compile it again
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
