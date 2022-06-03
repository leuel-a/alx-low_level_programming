#include <stdio.h>

/**
 * main - Entry point of my function
 *
 * Description - This program prints all the alphabets in lowercase
 *
 * Return: Returns 0 upon program success
 */

int main(void)
{
	char ch = 'a', CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
