#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - This function prints the elements of
 * an array passed to it as function argument. The elements
 * of the array are printed, by calling back another function
 * passed to it as function arguments.
 *
 * @array: The array to be printed
 * @size: The size of the array
 * @action: The function to print the array
 *
 * Return: This function returns a void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x, i;

	x = (int) size;

	if (array && action)
	{
		for (i = 0; i < x; i++)
		{
			action(array[i]);
		}
	}
}

