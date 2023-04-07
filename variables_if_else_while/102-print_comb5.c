#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
        int i, j, x, y;

        for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (x = i; x <= 57; x++)
			{
				for (y = 48; y <= 57; y++)
				{
					if (y > j)
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(x);
						putchar(y);

						if (!((i == 57) && (j == 56) && (x == 57) && (y == 57)))
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);

	return (0);
}
