#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - name functions
 * @separator: delimitador
 * @n: numbers list
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list d;

	va_start(d, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(d, int));
		printf("%s", (separador && i < n - 1) ? separador : "");
	}
	va_end(d);
	printf("\n");
}
