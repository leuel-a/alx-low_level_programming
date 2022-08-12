#include "main.h"

/**
 * _strlen - Finds the length of the string
 * @str: The string that you wish to find the length of
 * @x: This will help us find the length of the string,
 * and must be supplied by the user(it must all ways have
 * a value of zero);
 *
 * Return: On success, it returns the length of the string
 *
 */

int _strlen(char *str, int x)
{
	if (*str != '\0')
		return (_strlen(str + 1, x + 1));
	return (x);
}
