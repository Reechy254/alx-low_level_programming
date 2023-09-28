#include "main.h"

/**
 * flip_bits - It flips to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: the number of bits you would flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int a, b;

	b = 0;
	result = 1;
	differnce = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (result == (differnce & result))
			b++;
		result <<= 1;
	}

	return (b);
}
