#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- it Reads the text file print to STDOUT.
 * @filename: the text file to be read
 * @letters: the total number of letters being read.
 * Return: a- the actual printed number of bytes.
 *        0- returned when the filename is NULL or function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ruf;
	ssize_t pd;
	ssize_t a;
	ssize_t b;

	pd = open(filename, O_RDONLY);
	if (pd == -1)
		return (0);
	ruf = malloc(sizeof(char) * letters);
	b = read(pd, ruf, letters);
	a = write(STDOUT_FILENO, ruf, b);

	free(ruf);
	close(pd);
	return (a);
}
