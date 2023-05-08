#include "search_algos.h"

/**
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0, high = size - 1;
	while (low <= high)
	{
		print_subarray(array, low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_subarray
 */
void print_subarray(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i]);
	}
	putchar('\n');
}

