#include "main.h"

/**
 * print_rev - prints string upside down
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	for (n = i; n > 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar(10);
}
