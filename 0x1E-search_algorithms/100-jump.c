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
	int jump = sqrt(size), prev, step;

	if (!array)
		return (-1);

	prev = 0, step = 0;
	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += jump;
	}

	printf("Value found between indexex [%d] and [%d]\n", prev, step);
	while (prev <= step && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev += 1;
	}
	return (-1);
}
