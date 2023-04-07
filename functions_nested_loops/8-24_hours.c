#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar(48 + (h / 10));
			_putchar(48 + (h % 10));
			_putchar(58);
			_putchar(48 + (m / 10));
			_putchar(48 + (m % 10));
			_putchar(10);
		}
	}
}
