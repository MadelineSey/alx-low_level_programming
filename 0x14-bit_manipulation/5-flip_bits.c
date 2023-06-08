#include "main.h"

/**
  *flip_bits - counts the number of bits to flip to get from
  *one number to another
  *@n: first number
  *@m: second number
  *Return: number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int value;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		value = exclusive >> a;
		if (value & 1)
			count++;
	}
	return (count);
}
