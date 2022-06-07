#include "main.h"

/**
 * print_to_98 - is a function that prints upto 98
 *
 * @n: The number who will serve as the initial
 *
 * Return: Zero upon program success
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i > 10)
		{
			if (i == n)
			{
				goto here;
			}
			_putchar(',');
			_putchar(' ');
here:
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		} else
		{
			if (i == n)
			{
				goto there;
			}
			_putchar(',');
			_putchar(' ');
there:
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
