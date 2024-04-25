#include <stdio.h>

/**
* main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a == 101 || a == 113)
			continue;
		putchar(a);
	}

	putchar('\n');
	return (0);
}
