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
	int low, high, mid;

	low = 0, high = size - 1;

	while (array[high] != array[low] && (value >= array[low]
				&& value <= array[high]))
	{
		mid = low + ((value - array[low]) *
				(high - low) / (array[high] - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return mid;
	}
	return (-1);
}
