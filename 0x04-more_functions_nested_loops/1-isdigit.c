#include "main.h"

/**
 * _isdigit - This functions checks whether a given input is a digit
 *
 * @c: The number to be checked
 *
 * Return: 1 if the number is a digit between 0 - 9 and 0 if the num
 * ber is not a digit
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
