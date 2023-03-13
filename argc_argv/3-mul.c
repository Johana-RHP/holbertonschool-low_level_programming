#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: number of array arguments
 * @argv: value of each string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc <= 2 || argc >= 4)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
