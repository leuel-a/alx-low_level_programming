#include "main.h"

/**
 * _puts - write the string s to stdout, without its terminating
 * null byte ('\0')
 *
 * @s: pointer to the string s
 *
 * Return: Nothing (Success)
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
