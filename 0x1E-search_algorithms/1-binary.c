#include "search_algos.h"

/**
 * binary_search - searchs for an element in an array using
 * the binary search algorithm.
 * @size: size of the array to be searched
 * @value: value to be searched in the array
 * @array: the array to be searched
 *
 * Return: If the value found in the array, it returns the
 * index of the place it was found in. Otherwise, it returns
 * -1, and errno is set appropriately.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (!array)
		return (-1);
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
 * print_subarray - prints the subarray that is being searched
 * in the array
 * @start: the start index of the subarray
 * @end: the end index of the subarray
 * @array: the array to be searched
 *
 * Return: Nothing.
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

