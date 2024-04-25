#include <stdio.h>

/**
* main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);
			j++;

			if (i == 8) {
				continue;
			}
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
