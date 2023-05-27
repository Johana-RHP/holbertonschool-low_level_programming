#include "search_algos.h"
#include <math.h>

/**
 * binary_search - look up a value in an ordered array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in the array
 * @value: is the value sought
 *
 * Return: the first index where the value is found or if NULL returns -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int index_half, middle_value;
	int i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		index_half = floor((left + right) / 2);
		middle_value = array[index_half];

		printf("Searching in array:");
		for (i = left; i < right; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);
		if (value == middle_value)
		{
			return (index_half);
		}
		if (value < middle_value)
		{
			right = index_half - 1;
		}
		else
		{
			left = index_half + 1;
		}
	}

	return (-1);
}
