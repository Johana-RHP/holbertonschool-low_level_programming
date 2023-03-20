#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: memory size
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *p = NULL;

	p = malloc(sizeof(char) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
