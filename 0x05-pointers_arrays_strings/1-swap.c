#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to the first integer
 * @b: pointer to the first integer
 *
 * Return: Nothing (Success)
 */
void swap_int(int *a, int *b)
{
	int curr = *a;
	*a = *b;
	*b = curr;
}
