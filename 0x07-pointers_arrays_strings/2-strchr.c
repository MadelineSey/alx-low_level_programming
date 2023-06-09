#include "main.h"

/**
  *_strchr -  locates a character in a string
  *@s: the string
  *@c: the character
  *Return: a pointer to the first occurrence of the character c in the string s
  *or NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
