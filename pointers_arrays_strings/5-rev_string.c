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
 * rev_string - reverse string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int i, len, half;

	len = _strlen(s);
	half = len / 2;

	for (i = 0; i <= half; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
