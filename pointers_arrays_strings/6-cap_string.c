#include "main.h"
/**
 * *cap_string - permite modificar y comparar array
 * @n: puntero
 * Return: n
 */

char *cap_string(char *str)
{
	char *tmp = str;

	int capitalize_next = 1;

	while (*tmp != '\0')
	{
		if (capitalize_next && (*tmp >= 'a' && *tmp <= 'z'))
		{
			*tmp = *tmp - 32;
		}
		if (*tmp == ' ' || *tmp == '\t' || *tmp == '\n' ||
			*tmp == ',' || *tmp == ';' || *tmp == '.' ||
			*tmp == '|' || *tmp == '?' || *tmp == '"' ||
			*tmp == '(' || *tmp == ')' || *tmp == '{' || *tmp == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}

		tmp++;
	}
	return (str);
}
