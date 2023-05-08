#include "main.h"

/**
  *_memcpy - function copies n bytes from memory area src to memory area dest
  *@n: number of bytes to be copied from memory area
  *@src: memory area where bytes are copied from
  *@dest: memory area where bytes are copied to
  *Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = n;

	while (a < b)
	{
		dest[a] = src[a];
			a++;
	}
	return (dest);
}



