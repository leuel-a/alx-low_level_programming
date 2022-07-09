#include "function_pointers.h"

/**
 * int_index - This function finds a element an array
 * and returns the index if that element.
 *
 * @array: The array to be searched
 * @size: The size of the array to be searched
 * @cmp: A pointer to a function to which the
 * comparision happens
 *
 * Return: This function returns the index of the
 * element for which the cmp function does not
 * return 0. If no element is found it returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		int x = 0;

		x = cmp(array[i]);
		if (x != 0)
		{
			return (i);
		}
	}

	return (-1);
}
