#include "main.h"
#include <stdlib.h>

/**
  *read_textfile- Read text file print to STDOUT.
  *@filename: text file being read
  *@letters: number of letters to be read
  *Return: w- actual number of bytes read and printed
  *0 when function fails or filename is NULL.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	c = read(a, x, letters);
	b = write(STDOUT_FILENO, x, c);

	free(x);
	close(a);
	return (b);
}
