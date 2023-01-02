#include "search_algos.h"

/**
 * linear_search - searches for an element in an array
 * by using the linear searh algorithm
 * @array: the array to be searched
 * @size: size of the array to be searched
 * @value: the value to be searched in the array
 *
 * Return: On success, it returns the index where the value
 * has been found in the array. Otherwise, if not found, then
 * it returns -1, and errno is set appropriately
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	/**
	 * * If the value is not found with in the array.
	 */
	return (-1);
}
