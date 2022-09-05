#include "main.h"

/**
 * *_strcpy - This function copies a string
 * @src: The source string
 * @dest: The destination string
 *
 * Return: This function returns a void
 */

char *_strcpy(char *dest, char *src)
{
	int j, length = 0;

	while (*src != '\0')
	{
		length++;
	}
	for (j = 0; j <= length; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
