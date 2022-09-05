#include "main.h"

/**
 * _strlen - This function finds the length of a give string
 * @s: The string to be tested
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
