#include "main.h"

/**
 * print_rev - write the string s to the stdout in reverse
 *
 * @s: pointer to the string s
 * Return: Nothing (Success)
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}

	_putchar('\n');
}
