#include <stdio.h>

/**
 * main -ENtry point of my program
 *
 * Description - This program prints all possible combinations
 * of three digit numbers
 *
 * Return: Zero on program success
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (i == 0 && j == 1 && k == 2)
				{
					goto here;
				}
				putchar(',');
				putchar(' ');
here:
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
