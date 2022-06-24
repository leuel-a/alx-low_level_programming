#include "main.h"

/**
 * _puts - This function prints a string
 * @str: The string to be printed
 *
 * Return: This function returns nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
