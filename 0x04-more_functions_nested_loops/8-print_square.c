#include "main.h"

/**
 * print_square - This function prints a square
 * @size: This parameter determines the dimension of the square
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
