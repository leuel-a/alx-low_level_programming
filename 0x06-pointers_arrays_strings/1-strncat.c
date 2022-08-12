#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * @src: The source string that will be appended to dest
 * @dest: The destination string that will be appended by
 * src
 * @n: The number of bytes that will be appended from src
 *
 * Return: On success, it returns a pointer to the resulting
 * string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, x = 0, i;

	len = _strlen(dest, x);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
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

