#include "main.h"

/**
 * _strlen_recursion - This function finds the length of a string
 * @s: The string to be tested
 *
 * Return: This function returns the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	} else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
