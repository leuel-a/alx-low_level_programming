#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings supplied as arguments
 * @separator: A separator character that will separate the strings to be
 * printed to the stdout
 * @n: The number of strings that will be supplied as function arguments
 *
 * Return: This function returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n && n != 0; i++)
	{
		if (i == 0)
		{
			printf("%s", va_arg(args, char *));
			continue;
		}
		if (separator)
			printf("%s%s", separator, va_arg(args, char *));
		else
			printf("%s", va_arg(args, char *));
	}
	putchar('\n');
}
