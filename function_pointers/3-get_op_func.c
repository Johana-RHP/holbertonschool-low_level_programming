#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Select the correct function to be executed
 * @s: Address of operator
 *
 * Return: Pointer to correct function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	int i = 0;

	while ((ops + i))
	{
		if (*((ops + i)->op) == *s)
		{
			int (*my_func_ptr)(int, int) = *(ops + i)->f;

			return (my_func_ptr);
		}
		i++;
	}
	return (NULL);
}
