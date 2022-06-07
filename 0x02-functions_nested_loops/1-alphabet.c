#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: Always zero
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
