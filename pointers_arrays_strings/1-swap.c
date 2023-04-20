#include "main.h"

/**
 * swap_int - exchanges the values of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
