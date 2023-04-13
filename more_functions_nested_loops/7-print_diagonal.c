#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: size of the diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
