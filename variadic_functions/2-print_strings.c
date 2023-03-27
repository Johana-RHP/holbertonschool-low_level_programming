#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_strings - Print strings
 *  @separator: delimitador
 *  @n: amount of argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s = NULL;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
