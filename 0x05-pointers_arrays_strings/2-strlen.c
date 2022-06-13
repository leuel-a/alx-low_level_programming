#include "main.h"

/**
 * _strlen - Thi function finds the length of a string
 * @s: This is the string
 *
 * Return: This function returns the length of the string
 */

int _strlen(int *s)
{
	int i = 0;
	int length;

	while (*(s + i) != '\0')
	{
		i++;
	}
	length = i;
	i = 0;
	return (length);
}
