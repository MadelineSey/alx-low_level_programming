#include "main.h"
/**
  *_abs - gives the absolute value of an integer.
  *@m: The number in question.
  *Return: Absolute value
  */
int _abs(int m)
{
	if (m >= 0)
	{
		return (m);
	}
	else
	{
		return (m * -1);
	}
}
