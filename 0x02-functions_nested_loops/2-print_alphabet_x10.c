#include "main.h"

/**
 * main - Entry point of my program
 *
 * Return: Zero upon program success
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - prints lowercase alphabets 10x
 *
 * Description - This program prints all lowercase alphabet x10
 *
 * Return: Zero upon program success
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
