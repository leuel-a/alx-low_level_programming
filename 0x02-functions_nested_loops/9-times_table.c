#include "main.h"

/**
 * times_table - This function
 *
 * Return: Zero upon program success
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = (i * j);
			if (r > 9)
			{
				if (j == 0)
				{
					goto here;
				}
				_putchar(',');
				_putchar(' ');
here:
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			} else
			{
				if (j == 0)
				{
					goto there;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
there:
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}

