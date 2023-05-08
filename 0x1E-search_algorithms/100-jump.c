#include "search_algos.h"

/**
 * jump_search - search for a value in an array using the
 * jump search algorithm
 * @array: the array to be searched
 * @size: size of the array to be searched
 * @value: value to be searched in the array
 *
 * Return: If the value is found in the array, it will return
 * the index of the first match it has found. Otherwise, it
 * returns -1, and errno is set appropriately.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, step, i;

	if (!array)
		return (-1);

	prev = 0, step = 0;
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step, step += sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	for (i = prev; i <= step && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
