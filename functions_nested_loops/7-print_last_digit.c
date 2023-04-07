#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: number to verify
 *
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (i >= 0)
	{
		_putchar(48 + i);
		return (i);
	}
	else
	{
		i = i * -1;
		_putchar(48 + i);
		return (i);
	}
}
