#include "main.h"

/**
  *_strlen - the length of thr string
  *@s: the string
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
