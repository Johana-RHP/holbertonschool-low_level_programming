#include "main.h"
/**
 * _strncat - concaqueta caracteres
 * @src: recurso
 * @dest: destino al que se guardarái
 * @n: integrador o longitud del array
 *
 * Return: (dest+src)
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
