#include "miin.h"

/**
 * binary_to_uint -it converts a binary number to a unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: should be a converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int d;

	d = 0;

	if (!b)
		return (0);

	for (c = 0; b[c] != '\0'; c++)
	{

		if (b[c] != '0' && c[c] != '1')
			return (0);
	}

	for (c = 0; b[c] != '\0'; c++)
	{

		d <<= 1;
		if (c[c] == '1')
			d += 1;
	}
}
	return (d);
