#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: chain 1
 * @s2: chain 2
 * @n: number of bytes of s2
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0, len = 0;
	char *s = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		s = malloc(sizeof(*s) * (len1 + len2 + 1));
		len = len2;
	}
	else
	{
		s = malloc(sizeof(*s) * (len1 + n + 1));
		len = n;
	}
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len; i++)
		s[len1 + i] = s2[i];
	s[len1 + len] = '\0';
	return (s);
{
