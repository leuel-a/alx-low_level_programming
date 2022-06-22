#include "main.h"

/**
 * _pow_recursion - This function raises a number x
 * to the power y
 * @x: The number to be raised
 * @y: The power to be raised
 *
 * Return: This function returns the result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	} else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
