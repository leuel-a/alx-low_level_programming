#include <stdio.h>

/**
 * main - Entry point of my program
 * @argc: This is the number of arguments
 * @argv: This is the array of argumnets
 *
 * Return: Zero upon program success
 */

int main(int argc, char *argv[])
{
	int i, number;

	for (i = 1; i < argc; i++)
	{
		if (argv[i] == NULL)
		{
			break;
		}
		number++;
	}
	printf("%d\n", number);
	return (0);
}
