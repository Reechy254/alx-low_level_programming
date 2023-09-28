/**
 * set_bit - makes the value of a bit to be 1 in evey index.
 * @index: starts from 0 of the bit you have set..
 * @n: pointer number of b
 * Return: 1 if worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | b;

	return (1);
}
