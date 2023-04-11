#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: digit to compare
 *
 * Return: returns 1 if it is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
