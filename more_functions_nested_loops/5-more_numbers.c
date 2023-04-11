#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			_putchar(m);
		}
		for (m = 10; m <= 14; m++)
		{
			_putchar(48 + (m / 10));
			_putchar(48 + (m % 10));
		}
		_putchar(10);
	}
}
