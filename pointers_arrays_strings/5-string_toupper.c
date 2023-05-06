#include "main.h"

/**
 * string_toupper - permite cambiar de minuscula a mayuscula
 * @p: recuerso
 * Return: (p)
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
