#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index:checks the bit
 *
 * Return:should return the value of the bit as an index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int lib, bev;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	lib = 1 << index;
	bev = n & bev;

	if (lib == bev)
		return (1);

	return (0);
}
