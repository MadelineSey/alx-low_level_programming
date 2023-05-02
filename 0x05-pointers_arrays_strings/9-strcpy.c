#include "main.h"

/**
  *_strcpy - copies the string pointed to by src to thr buffer point
  *@src: points to the string
  *@dest: points to the buffer point
  *Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
			a++;
	}
	dest[a] = '\0';
	return (dest);
}
