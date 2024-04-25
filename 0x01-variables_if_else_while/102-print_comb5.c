#include <stdio.h>

/**
* main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (k <= i && l <= j)
						continue;

					putchar('0' + i);
					putchar('0' + j);

					putchar(' ');

					putchar('0' + k);
					putchar('0' + l);

					if (k == 9 && l == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
