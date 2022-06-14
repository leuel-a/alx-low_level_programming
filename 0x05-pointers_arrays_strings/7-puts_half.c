#include "main.h"

/**
 * puts_half - This function prints the second half of the string
 * @s: The string to be printed
 *
 * Return: This function returns nothing
 */

void puts_half(char *s)
{
	int i = 0, j, length = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	length = i;
	for (j = length / 2; j < length; j++)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
