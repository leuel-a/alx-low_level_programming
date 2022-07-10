#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This finds the sum of th parameters passed
 * to it.
 *
 * @n: The number of variables to be passed as function arguments
 *
 * Return: The sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);

	return (sum);
}
