#include <stdio.h>

/**
 * main - ENtry point of my program
 *
 * Description - Prints alphabet in reverse
 *
 * Return: Zero on program success
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
