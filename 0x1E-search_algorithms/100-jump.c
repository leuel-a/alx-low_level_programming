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
	int i;
	size_t prev, step;

	if (!array)
		return (-1);

	prev = 0, step = sqrt(size);
	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step, step += sqrt(size);
	}
	printf("Value found between indexex [%ld] and [%ld]\n",
			prev - (int)floor(sqrt(size)), prev);

	for (i = prev - floor(sqrt(size)); i <= (int)prev; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
