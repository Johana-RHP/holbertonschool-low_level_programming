#include "main.h"
/**
 * _strcmp - compara dos fuente de caracteres
 * @s1: primer recurso
 * @s2: segundo recurso
 * Return: (0)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
