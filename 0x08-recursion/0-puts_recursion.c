#include "main.h"

/**
 * _puts_recursion - This file prints a string using recursion
 * @s: The string to be printed
 *
 * Return: This function returns a void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	} else
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
