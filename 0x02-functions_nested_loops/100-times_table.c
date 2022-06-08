#include "main.h"

/**
 * print_times_table - This function prints the times table
 * of a given number
 *
 * @n: This is the number to limit the times table
 *
 * Return: Void, nothing
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{

	} else
	{
	int i, j;

	for (i = 0; i < (n + 1); i++)
	{
		for (j = 0; j < (n + 1); j++)
		{
			int r;

			r = (i * j);

			if (r > 9 && r <= 99)
			{
				one(r, j);
			} else if (r > 99 && r < 999)
			{
				two(r, j);
			} else
			{
				three(r, j);
			}
		}
		_putchar('\n');
	}
	}
}

/**
 * one - This function is part of previous one
 * @a: used to print the digit
 * @b: used to control the function
 *
 * Return: Nothing
 */

void one(int a, int b)
{
	if (b == 0)
	{
		goto here;
	}
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
here:
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
}

/**
 * two - This function is part of previous one
 * @a: used to print digit
 * @b: used to control the function
 *
 * Return: Nothing
 */

void two(int a, int b)
{
	if (b == 0)
	{
		goto there;
	}
	_putchar(',');
	_putchar(' ');
there:
	_putchar((a / 100) + '0');
	_putchar(((a / 10) % 10) + '0');
	_putchar((a % 10) + '0');
}

/**
 * three - This function is part of previous one
 * @a: used to print digit
 * @b: used to control function
 *
 * Return: Nothing
 */

void three(int a, int b)
{
	if (b == 0)
	{
		goto far;
	}
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
far:
	_putchar(a + '0');
}
