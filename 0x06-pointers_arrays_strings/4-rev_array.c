#include "main.h"

/**
 * reverse_array - This function reverses an array of integers
 * @a: The arrays to be reversed
 * @n: The size of the array
 *
 * Return: This function returns a void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
}
