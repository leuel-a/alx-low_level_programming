#include "main.h"

/**
 * print_sign - This function print the sign of a number
 * @n: This is the number to be tested
 *
 * Return: 1 if number is greater that zero, 0 if the number
 * is zero, and -1 if th number is less tha zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
