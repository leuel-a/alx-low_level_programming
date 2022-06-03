#include <stdio.h>

/**
 * main - Enrty point of my program
 *
 * Description - This program prints hexadecimal number.
 *
 * Return: 0 o program success
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar((n % 10) + '0');
		} else
		{
			char ch = 'a';

			while (ch < 'g')
			{
				putchar(ch);
				ch++;
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
