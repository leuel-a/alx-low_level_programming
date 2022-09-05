#include "main.h"

/**
 * _puts - This function prints a string
 * @str: The string to be printed
 *
 * Return: This function returns nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
