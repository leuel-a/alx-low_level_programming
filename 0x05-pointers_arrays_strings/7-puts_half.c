#include "main.h"

/**
 * puts_half - This function prints the second half of the string
 * @s: The string to be printed
 *
 * Return: This function returns nothing
 */

void puts_half(char *s)
{
	long int i = 0, j, length = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	length = i;

	if (length % 2 == 1)
	{
		int n = (length - 1) / 2;

		for (j = n + 1; j < length; j++)
		{
			_putchar(*(s + j));
		}
		_putchar('\n');
	} else
	{
		for (j = length / 2; j < length; j++)
		{
			_putchar(*(s + j));
		}
		_putchar('\n');
	}
}
