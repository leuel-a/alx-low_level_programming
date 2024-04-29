#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: Nothing (Success)
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 97;
		while (j < 123)
			_putchar(j), j++;
		_putchar('\n');
	}
}
