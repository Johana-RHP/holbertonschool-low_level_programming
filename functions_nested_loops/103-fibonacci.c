#include <stdio.h>

/**
 * main - prints the sum of the even numbers of a fibonacci sequence
 *
 * Return: Always (0)
 */

int main(void)
{
	int a = 1, b = 2, r;
	int sum = 2;

	for (r = a + b; r <= 4000000; r = a + b)
	{
		a = b;
		b = r;
		if (r % 2 == 0)
			sum += r;
	}
	printf("%d\n", sum);
	return (0);
}
