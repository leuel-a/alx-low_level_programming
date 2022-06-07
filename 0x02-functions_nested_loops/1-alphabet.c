#include "main.h"

/**
 * main - Entry point of my program
 *
 * Return: Always zero
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
