#include "main.h"

/**
 * print_numbers - This function prints digit from 0 - 9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
