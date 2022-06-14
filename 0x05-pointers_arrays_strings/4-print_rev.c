#include "main.h"

/**
 * print_rev - This function prints a string in reverse
 * @s: This is the string to be reversed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0, length = 0, j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	length = i;
	for (j = length - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
