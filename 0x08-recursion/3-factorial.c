#include "main.h"

/**
 * factorial - This function finds the factorial of a number
 * @n: The number to be tested
 *
 * Return: The factorial of the number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	} else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
