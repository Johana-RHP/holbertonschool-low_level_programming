#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of array elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%i", a[i]);
		else
			printf(", %i", a[i]);
	}
	putchar(10);
}
