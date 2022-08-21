#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers supplied as arguments
 * @separator: A separator character between the numbers
 * @n: The number of numbers that will be supplied as arguments
 *
 * Return: This function returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n && n != 0; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(args, int));
			continue;
		}
		if (separator)
			printf("%s %d", separator, va_arg(args, int));
		else
			printf(" %d", va_arg(args, int));
	}
	putchar('\n');
	va_end(args);
}
