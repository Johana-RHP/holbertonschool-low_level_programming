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
 * puts2 - prints string skipping one character
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
