#include "main.h"

/**
  *cap_string - capitalize all words of the string
  *@str: the string
  *Return: Always 0
  */
char *cap_string(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		if (str[0] > 96 && str[0] < 123)
		{
			str[0] = str[0] - 32;
		}
	if (str[x] == ' ' || str[x] == '\t' || str[x] == '\n' || str[x] == ','
	    || str[x] == ';' || str[x] == '.' || str[x] == '!'|| str[x] == '?'
	    || str[x] == '"' || str[x] == '(' || str[x] == ')' || str[x] == '{'
	    || str[x] == '}')
	{
		if (str[x + 1] > 96 && str[x + 1] < 123)
		{
			str[x + 1] = str[x + 1] - 32;
		}
	}
	x++;
	return (str);
}
