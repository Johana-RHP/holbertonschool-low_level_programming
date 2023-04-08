#include "main.h"

/**
 * times_table - prints the multiplication table of 9
 *
 * Return: Void
 */

void times_table(void)
{
	int x, y;
	int r;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			r = x * y;
			if (r == 0)
				_putchar(48);
			else if ((r > 0) && (r <= 9))
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(48 + r);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(48 + (r / 10));
				_putchar(48 + (r % 10));
			}
		}
		_putchar(10);
	}
}
