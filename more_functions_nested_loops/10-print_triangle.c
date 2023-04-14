#include "main.h"

/**
 * print_triangle - print triangle formed by #
 * @size: triangle size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = (size - i); j >= 1; j--)
			{
				_putchar(' ');
			}

			for (n = 1; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar('\n');
}
