#include "main.h"

/**
 * clear_bit - it sets the value of a bit to 0 everytime
 * @n: number of b
 * @index: starts from a 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	b = ~(1 << index);
	*n = *n & b;

	return (1);
}
