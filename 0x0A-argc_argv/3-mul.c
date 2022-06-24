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
	int i;

	int result = 1, x;

	if (argc != 3)
	{
		printf("Error\n");
	} else
	{

		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], 0, 10);
			result = result * x;
		}
		printf("%d\n", result);
	}
	return (0);
}
