#include "main.h"

/**
 * print_line - This function prints a line for a given input
 * @n: Limit the line to be printed
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
