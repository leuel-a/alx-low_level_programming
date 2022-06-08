#include <stdio.h>

/**
 * main -Entry point of my program
 *
 * Return: Zero upon program success
 */

int main(void)
{
	int i, n1 = 1, n2 = 2, n3;

	printf("%d, %d, ", n1, n2);

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
