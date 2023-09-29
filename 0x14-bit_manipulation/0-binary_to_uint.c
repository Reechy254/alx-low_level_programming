#include "main.h"

/**
 * binary_to_uint -it converts a binary number to a unsigned int.
 * @c: contains the binary number
 *
 * Return: should be a converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int d = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		d = 2 * d + (b[a] - '0');

	}

	return (d);
}