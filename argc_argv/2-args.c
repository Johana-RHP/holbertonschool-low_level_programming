#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: number of array arguments
 * @argv: value of each string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0; 

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
