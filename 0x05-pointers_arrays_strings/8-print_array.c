#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints an array of n elements
 * @a: This is the array to be printed
 * @n: This is the size of the array
 *
 * Return: This function returns void upon program success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", *(a + i));
		} else
		printf("%d, ", *(a + i));
	}
	putchar('\n');
}
