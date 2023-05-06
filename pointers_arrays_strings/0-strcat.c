#include "main.h"
/**
 * _strcat - concaqueta caracteres
 * @src: recurso
 * @dest: destino al que se guardará
 * Return: (dest+src)
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
