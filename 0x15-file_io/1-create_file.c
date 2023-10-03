#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to name of file to create.
 * @text_content: pointer to string that writes to the file.
 *
 * Return:-1 - If the function fails.
 *         Otherwise - return 1.
 */

int create_file(const char *filename, char *text_content)
{
	int pd, a, len = 0;
    
    if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
    
    pd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(pd, text_content, len);
    
    if (pd == -1 || a == -1)
		return (-1);
	close(pd);
    
    return (1);
}