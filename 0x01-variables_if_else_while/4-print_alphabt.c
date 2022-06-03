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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
