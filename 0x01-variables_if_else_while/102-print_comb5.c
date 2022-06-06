#include <stdio.h>

/**
 * main - Entry point of my program
 *
 * Description - This program prints all combination of two
 * two digit numbers.
 *
 * Return: Zero upon program success
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i == 0 && j == 0 && k == 0 && l == 1)
					{
						goto here;
					} else if (i == 0 && j == 0 && k == 0 && l == 0)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
here:
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar(' ');
					putchar((k % 10) + '0');
					putchar((l % 10) + '0');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

