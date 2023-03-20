#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an array that copies a specific character
 * @size: size
 * @c: character
 *
 * Return: Always 0;
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
