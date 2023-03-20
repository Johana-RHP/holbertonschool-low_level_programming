#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenete two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int n, m;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n = 0; s1[n] != '\0'; n++)
		;
	for (m = 0; s2[m] != '\0'; m++)
		;
	ptr = malloc(sizeof(char) * (n + m + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; i < (n + m + 1); i++, j++)
		ptr[i] = s2[j];
	return (ptr);
}
