#include "main.h"

/**
 * puts2 - This function prints everyother string
 * @s: The string to be printed
 *
 * Return: This function returns a void
 */

void puts2(char *s)
{
	int i = 0, j = 0, length = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	length = i;
	while (j < length)
	{
		_putchar(*(s + j));
		j = j + 2;
	}
	_putchar('\n');
}
