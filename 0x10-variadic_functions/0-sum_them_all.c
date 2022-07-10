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
	if (n == 0)
	{
		return (0);
	}

	unsigned int i;
	
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}

	va_end(args);

	return (sum);
}
