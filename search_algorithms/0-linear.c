#include "search_algos.h"

/**
 * linear_search - look up a value in an array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in the array
 * @value: is the value sought
 *
 * Return: the first index where the value is found or if NULL returns -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int n = 0;

	for (i = 0; i < size; i++)
	{
		if (value != array[i])
		{
			n = array[i];
			printf("Value checked array[%ld] = [%d]\n", i, n);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, value);
			return (value);
		}
	}

	return (-1);
}
