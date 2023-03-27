#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: pointer array
 * @size: number elements in array
 * @cmp: function for do the search
 *
 * Return: first element index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, x = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i] > 0))
		{
			x = 1;
			break;
		}
		if ((cmp(array[i]) == (-1)))
			return (x);
	}
	return (i);
}
