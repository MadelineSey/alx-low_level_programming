#include "main.h"

/**
  *_memset - fills the first n bytes of the memory area pointed to by s
  *with the constant byte b
  *@s: memory area to be filled
  *@b: the constant byte to fill the first n bytes of the memory area
  *@n: number of times to copy b
  *Return: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
