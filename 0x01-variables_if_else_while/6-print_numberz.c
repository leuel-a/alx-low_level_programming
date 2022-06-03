#include <stdio.h>

/**
 * main - Entry point for my program
 *
 * Description - This program will print numbers
 *
 * Return: Zero on program success
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
