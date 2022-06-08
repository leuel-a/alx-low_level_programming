#include <stdio.h>

/**
 * main -Entry point of my program
 *
 * Return: Zero upon program success
 */

int main(void)
{
	int i;
	unsigned long n1 = 1, n2 = 2, n3;

	printf("%lu, %lu, ", n1, n2);

	for (i = 0; i < 48; i++)
	{
		if (i == 47)
		{
			n3 = n1 + n2;
			printf("%lu", n3);
		} else
		{
			n3 = n1 + n2;
			printf("%lu, ", n3);
			n1 = n2;
			n2 = n3;
		}
	}
	putchar('\n');
	return (0);
}
