#include "main.h"

/**
 * _strlen - Thi function finds the length of a string
 * @s: This is the string
 *
 * Return: This function returns the length of the string
 */

int _strlen(int *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
