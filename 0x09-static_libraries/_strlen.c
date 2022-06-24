
#include "main.h"

/**
 * _strlen - This function finds the length of a give string
 * @s: The string to be tested
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
