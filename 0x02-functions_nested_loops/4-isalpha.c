#include "main.h"

/**
 * main - Entry point of my program
 *
 * Return: Zero upn program success
 */

int main(void)
{
	int r;

	r = _isalpha('A');
	_putchar(r + '0');
	r = _isalpha('0');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

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
