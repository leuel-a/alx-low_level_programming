#include "main.h"

/**
 * _abs - This function calculates the absolute value of a number
 * @n: The number to be checked
 *
 * Return: Returns the absolute value of the number entered
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}
