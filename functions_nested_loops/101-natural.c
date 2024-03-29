#include <stdio.h>

/**
 * main - sum of all multiples of 3 or 5 below 1024 (excl.)
 *
 * Return: Always (0)
 */

int main(void)
{
	int n, sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
