#include <stdio.h>

/**
 * main - Entry point for my program
 *
 * Description - This program lists all combination of two digit numbers
 *
 * Return: Zero upon program success
 *
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i > j || i == j)
			{
				continue;
			} else if (i == 0 && j == 1)
			{
				goto here;
			}
			putchar(',');
			putchar(' ');
here:
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
		}
	}
	putchar('\n');
	return (0);
}
