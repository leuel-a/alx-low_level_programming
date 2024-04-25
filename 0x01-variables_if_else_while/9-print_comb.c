#include <stdio.h>

/**
* main - entry point of the program
 *
 * Return: Always zero (Success)
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);

		if (a != 9)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
