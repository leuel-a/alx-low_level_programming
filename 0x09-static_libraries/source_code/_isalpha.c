#include "main.h"

/**
 * _isalpha - This function checks whether the character is an
 * alphabet
 * @c: This is where the value of the character is passed as an
 * argument
 *
 * Return: One if c is an alphabet, and zero if it is not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
