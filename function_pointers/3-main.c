#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Execute one of the 5 available programs
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	my_func_def_t a;
	char *s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0' || !(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = get_op_func(s);
	printf("%d\n", a(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
