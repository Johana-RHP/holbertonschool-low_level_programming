#include "main.h"

/**
 * _abs - calculates the absolute value of a number
 * @i: number to calculate
 *
 * Return: the absolute value of the number
 */

int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (i * -1);
	else
		return (i);
}
