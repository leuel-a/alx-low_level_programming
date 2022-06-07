#include "main.h"
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

/**
 * print_last_digit - This function prints the last digit of a number
 * @n: The number entered
 *
 * Return: The last digit of desired number
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n = -1 * n;
	}
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
