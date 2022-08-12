#include "main.h"

/**
 * _strcmp - this function compares two strings pointed
 * by s1 and s2
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: On success, it returns:
 * 0 if s1 is equal to s2
 * negative value if s1 is less that s2
 * positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
