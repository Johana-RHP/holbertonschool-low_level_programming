#include "main.h"

/**
 * _strlen - calculates the length of the string
 * @s: string
 *
 * Return: chain length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	return (i);
}

/**
 * _strcpy - copy src string to dest
 * @dest: pointer to where the string will be copied
 * @src: string pointer to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return(dest);
}
