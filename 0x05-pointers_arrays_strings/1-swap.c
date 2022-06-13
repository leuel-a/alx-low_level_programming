#include "main.h"

/**
 * swap_int - This function swaps two integers
 * @a: The first number 
 * @b: The second number
 *
 * Return: Nothing the function returns void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
