#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int x, int y);
int is_palindrome(char *s);

/**
  *find_strlen - checks the length of the string
  *@s: the string
  *Return: 1 if a string is a palindrome and 0 if not
  */
int find_strlen(char *s)
{
	int x = 0;

	if (*(s + x))
	{
		x++;
		x += find_strlen(s + x);
	}
	return (x);
}
