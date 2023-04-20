#include "main.h"

/**
 * puts2 - prints string skipping one character
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
