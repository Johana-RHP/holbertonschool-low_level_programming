#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum amount of coins to give change
 * @argc: number of array arguments
 * @argv: value of each string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0, x = 0;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; x >= 0;)
	{
		if (x >= 25)
			x = x - 25;
		else if (x >= 10)
			x = x - 10;
		else if (x >= 5)
			x = x - 5;
		else if (x >= 2)
			x = x - 2;
		else if (x >= 1)
			x = x - 1;
		else
			break;
		count = count + 1;
	}
	printf("%d\n", count);
	return (0);
}
