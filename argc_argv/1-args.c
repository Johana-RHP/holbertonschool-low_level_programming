#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of array arguments
 * @argv: value of each string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
