#include "main.h"

/**
 * _strcpy - copy src string to dest
 * @dest: pointer to where the string will be copied
 * @src: string pointer to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return(dest);
}
