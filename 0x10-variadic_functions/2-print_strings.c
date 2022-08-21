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
	char *str;

	va_start(args, n);
	for (i = 0; i < n && n != 0; i++)
	{
		str = va_arg(args, char *);
		if (i == 0)
		{
			printf("%s", str ? str : "(nil)");
			continue;
		}
		if (separator)
			printf("%s%s", separator, str ? str : "(nil)");
		else
			printf("%s", str ? str : "(nil)");
	}
	putchar('\n');
}
