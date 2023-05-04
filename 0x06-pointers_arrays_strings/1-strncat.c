#include "main.h"

/**
  *_strncat - function that concatenates two strings
  *Description: it will use at most n bytes from src; and
  *src does not need to be null-terminated if it contains n or more bytes
  *@dest: append src to dest
  *@src: to be appended to dest
  *@n: The number of bytes to be appended to dest
  *Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x++])
		y++;
	for (x = 0; src[x] && x < n; x++)
		dest[y++] = src[x];
	return (dest);
}
