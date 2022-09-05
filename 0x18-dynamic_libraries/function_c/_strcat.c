#include "main.h"

/**
 * _strcat - This function concatinates two strings
 * @dest: This string will be appended by the string
 * pointed by src
 * @src: The source string that will be appended to
 * the dest string
 *
 * Return: This function returns a pointer to the resulting
 * string dest.
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, len, i;

	len = _strlen(dest, x);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

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
