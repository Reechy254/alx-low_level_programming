#include "main.h"

/**
 * get_endianness - it checks endianness
 *
 * Return: 0 if big endian and 1 if small endian
 */

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;

	return (b);
}
