#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always (0)
 */

int main(void)
{
	int i, r;
	int a = 1, b = 2;

	printf("%d, %d, ", a, b);
	for (i = 1; i <= 48; i++)
	{
		r = a + b;
		if (i == 48)
			printf("%d\n", r);
		else
		{
			printf("%d, ", r);
			a = b;
			b = r;
		}
	}

	return (0);
}
