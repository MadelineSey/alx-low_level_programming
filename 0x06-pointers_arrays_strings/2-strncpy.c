#include "main.h"

/**
  *_strncpy - function that copies a string
  *@dest: append src to dest
  *@src: append src to dest
  *@n: number of bytes of src to be appended to dest
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
