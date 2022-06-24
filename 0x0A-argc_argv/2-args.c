#include <stdio.h>

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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
