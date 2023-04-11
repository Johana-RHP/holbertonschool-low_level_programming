#include "main.h"

/**
 * _isupper - checks whether the character is uppercase or lowercase
 * @c: character to be analyzed
 *
 * Return: returns 1 if c is uppercase or 0 if it is lowercase
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
