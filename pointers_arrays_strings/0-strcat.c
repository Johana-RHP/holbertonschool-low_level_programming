#include "main.h"
/**
 * _strcat - concaqueta caracteres
 * @src: recurso
 * @dest: destino al que se guardará
 * Return: (dest+src)
 *
 */

char *_strcat(char *dest, char *src)
{
	int lend = strlen(dest);
	int lens = strlen(src);
	int i;

	for (i = 0; i < lens && src[i] != '\0'; i++)
		dest[lend + i] = src[i];
	dest[lend + i] = '\0';
	return (dest);
}
