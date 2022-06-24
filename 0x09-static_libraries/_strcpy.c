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
	int i = 0, j, length;

	while (*(src + i) != '\0')
	{
		i++;
	}
	length = i;

	for (j = 0; j <= length; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
