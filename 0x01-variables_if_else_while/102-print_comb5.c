#include <stdio.h>

/**
* main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, l, first = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if ((k < i || l < j) || (k == i && l <= j))
						continue;

					if (first == 1)
					{
						putchar(',');
						putchar(' ');
					}

					if (first == 0)
						first = 1;

					putchar('0' + i);
					putchar('0' + j);

					putchar(' ');

					putchar('0' + k);
					putchar('0' + l);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
