#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all arguments
 * @n: amount of numbers
 *
 * Return: returns the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list r;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum *= va_arg(numbers, int);
	ve_end(r);

	return (sum);
}
