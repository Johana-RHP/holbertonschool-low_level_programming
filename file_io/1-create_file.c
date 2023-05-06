#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t s;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(fd, text_content, i);

	if (fd == -1)
		return (-1);	
	if (s == -1)
		return (-1);
	close(fd);

	return (1);
}
