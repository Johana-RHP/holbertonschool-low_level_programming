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
 * puts_half - prints the second half of the string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, half, len;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		half = len / 2;
		for (i = half; i < len; i++)
                	_putchar(str[i]);
	}
	else
	{
		half = (len - 1) / 2;
		for (i = (half + 1); i < len; i++)
			_putchar(str[i]);
	}
	_putchar(10);
}
