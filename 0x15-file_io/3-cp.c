#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int pd);

/**
 * create_buffer - Allocates 1024bytes to a buffer.
 * @file: Name of  file buffer storing chars for.
 *
 * Return: Pointer to the newly created buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes the descriptors.
 * @pd:descriptor to be closed.
 */
void close_file(int pd)
{
	int a;

	a = close(pd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close pd %d\n", pd);
		exit(100);
	}
}

/**
 * main - Copies contents of file to another one.
 * @argc: Arguments number supplied to program.
 * @argv: Array of pointers to arguments.
 *
 * Return: 0 when success.
 *
 *Description:
 *  Exit code 97 - when the argument count is incorrect.
 *  Exit code 98 - when file_from does not exist or can't be read.
 *  Exit code 99 - when file_to cannot be created or written to.
 *  Exit code 100 - when file_to or file_from cannot be closed.
 */
int main(int argc, char *argv[])
{
	int to, from, m, n;

	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	m = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		n = write(to, buffer, m);
		if (to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		m = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (m > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
