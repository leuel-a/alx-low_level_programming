#include "main.h"

/**
 * swap_int - This function swaps two integers
 * @a: The first number 
 * @b: The second number
 *
 * Return: Nothing the function returns void
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;

	*b = *a;
	*a = temp;
}
