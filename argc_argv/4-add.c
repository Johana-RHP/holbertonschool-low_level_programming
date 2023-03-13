#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of positive numbers
 * @argc: number of array arguments
 * @argv: number of each string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	int sum = 0;
	char *str = '\0';

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] < 48 || str[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}
