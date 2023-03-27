#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to be printed
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
