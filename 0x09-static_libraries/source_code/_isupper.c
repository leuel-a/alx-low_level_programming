#include "main.h"

/**
 * _isupper - This function checks whether a letter in uppercase
 * @c: This is the character to be tested
 *
 * Return: one if the letter is uppercase
 * and zero if letter is lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
