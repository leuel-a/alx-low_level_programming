#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: The character passed as argument
 * Return: 0 if the character is not an alphabet. 1
 * if the character is an alphabet.
 */
int _isalpha(int c)
{
	if (c >= 65 && c < 123)
		return (1);
	return (0);
}
