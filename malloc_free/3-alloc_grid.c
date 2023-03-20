#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a two-dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, x, y;

	if (width < 1 || height < 1)
		return (0);
	ptr = malloc(sizeof(void *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			ptr[y][x] = 0;
	}

	return (ptr);
}
