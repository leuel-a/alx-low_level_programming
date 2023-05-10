#include "search_algos.h"

/**
 * interpolation_search - search for an element in an array
 * using the interpolation search algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the key to be searched in the array
 *
 * Return: On success, it returns the index of the value in the array,
 * otherwise it returns -1.
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low, high, pos;

	if (!array)
		return (-1);
	low = 0, high = size - 1;
	while (low <= high && (value >= array[low]
				&& value <= array[high]))
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
