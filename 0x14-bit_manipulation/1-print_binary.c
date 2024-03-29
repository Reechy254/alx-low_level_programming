#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number
 * @b: a unsigned long int.
 *
 * Return: null return
 */

void print_binary(unsigned long int b)
{
	if (b >> 0)
	{
		if (b >> 1)
			print_binary(b >> 1);
		_putchar((b & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
