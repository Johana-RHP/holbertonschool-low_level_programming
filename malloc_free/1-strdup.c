#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the copy of the string
 * @str: string
 *
 * Return: a new pointer
 */
char *_strdup(char *str)
{
	char *a = NULL;
	int n = 0;
	int i = 0;

	if (str == 0)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	n++;
	a = malloc(sizeof(char) * n);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		a[i] = str[i];
	return (a);
}
