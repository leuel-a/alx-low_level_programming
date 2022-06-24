#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for my program
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 *
 * Return: Zero upon program success
 */

int main(int argc, char *argv[])
{
	int i, x, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], NULL, 10);
			if (x == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += x;
		}
		printf("%d\n", sum);
	}
	return (0);
}
