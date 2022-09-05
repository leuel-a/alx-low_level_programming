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
	int len, i;

	len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
