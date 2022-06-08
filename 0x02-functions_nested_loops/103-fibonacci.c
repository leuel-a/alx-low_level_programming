#include <stdio.h>

/**
 * main - Entry point of my program
 *
 * Return: Zero upon program success
 */

int main(void)
{
	int i;
	unsigned long int n1 = 1, n2 = 2, n3, sum;

	sum = 2;

	for (i = 0; i < 31; i++)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
		{
			sum = sum + n3;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}
