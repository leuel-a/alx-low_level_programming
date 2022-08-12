#include "main.h"

/**
 * _strncpy - This function copies a string pointed by
 * src to  a destination string pointed by dest
 * @src: The source string that will be copied to dest
 * @dest: The destination string where src will be copied
 * @n: The number of bytes that will be copied from src
 *
 * Return: On success, it returns the resulting string
 * pointed by dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
