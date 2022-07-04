#include <stdio.h>

/**
 * main - Entry point for my program
 *
 * Description - This program prints the file
 * name from which it i compiled from
 *
 * Return: Zero upon program success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
