#include "main.h"

/**
  *_strcat - function that concatenates two strings.
  *Description: appends the src string to the dest string, overwriting the
  *terminating null byte (\0) at the end of dest, and then adds a
  *terminating null byte
  *@dest: append src to dest
  *@src: source string to append to dest
  *Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; src[y] != '\0'; y++, x++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
