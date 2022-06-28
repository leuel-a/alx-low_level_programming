#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: The string to be copied
 *
 * Return: On Success, this function returns a pointer to
 * the duplicated string. It returns NULL, if insufficent
 * memory was avaliable, and if str == NULL.
 */

char *_strdup(char *str)
{
	char *ch;
	int i = 0, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0'; size++)
	;

	ch = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	for (; i < size; i++)
		ch[i] = str[i];
	return (ch);
}
