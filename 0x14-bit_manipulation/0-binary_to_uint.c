#include "main.h"

/**
 * binary_to_uint -it converts a binary number to a unsigned int.
 * @c: pointing to a string of 0 and 1 chars
 *
 * Return: should be a converted number, or 0
 */

unsigned int binary_to_uint(const char *c)
{
	int a;
	unsigned int b = 0;

	if (!c)
		return (0);

	for (a = 0; c[a]; a++)
	{
		if (c[a] < '0' || c[a] > '1')
			return (0);
		b = 2 * b + (c[a] - '0');

	}

	return (b);
}