#include <stdio.h>
#include "main.h"

/**
 * print_times_table - multiplication table n
 * @n: number greater than 0 or less than 15
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;
	int r;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			putchar(48);
			for (j = 1; j <= n; j++)
			{
				r = i * j;
				if ((r >= 0) && (r <= 9))
				{
					printf(",   %d", r);
				}
				else if ((r >= 10) && (r <= 99))
				{
					printf(",  %d", r);
				}
				else
				{
					printf(", %d", r);
				}
			}
			putchar(10);
		}
	}
}
