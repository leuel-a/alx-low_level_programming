#include <stdio.h>

/**
* main - entry point of my program
 *
 * Return: Always zero (success)
*/
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
