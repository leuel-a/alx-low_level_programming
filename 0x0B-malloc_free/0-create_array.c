#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array and
 * initializes it to a specific char.
 *
 * @size: This is the size of the char array that the
 * space will be allocated
 *
 * @c: This is the character that we will initialize
 * array of chars with
 *
 * Return: This function returns pointer to the array
 * on program success. But if it fails, it will return
 * a NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
	{
		return (NULL);
	}
	ch = malloc(sizeof(*ch) * size);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ch + i) = c;
	}
	return (ch);
}
