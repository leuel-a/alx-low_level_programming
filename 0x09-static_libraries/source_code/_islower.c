#include "main.h"

/**
 * _islower - Checks whether an alphabet is in lowercase
 * @c: it is the integer value of the lowercase letter in ASCII
 *
 * Return: Return 1 if the alphabet is lowercase
 * otherwise Return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
