#include <stdio.h>

/**
 * main - Entry point of my program
 *
 * Description - This program list numbers
 * Return: Zero upon program success
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n == 0)
		{
			goto here;
		}
		putchar(',');
		putchar(' ');
here:
		putchar((n % 10) + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
