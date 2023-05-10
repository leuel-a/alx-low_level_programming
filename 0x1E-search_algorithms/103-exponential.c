#include "search_algos.h"

/**
 * exponential_search - search for a value in an array using the
 * exponenetial search algorithm
 *
 * @array: the array to be searched
 * @size: size of the array
 * @value: value of the array
 *
 * Return: On success, it returns the first index of the value found
 * in the array, otherwise it returns -1, and errno is set appropriately.
 */
int exponential_search(int *array, size_t size, int value)
{
	int jump, low, high, mid;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	jump = 1;
	while (jump < (int)size && array[jump] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		jump = jump * 2;
	}

	low = jump / 2;

	if (jump >= (int)size)
		high = size - 1;
	else
		high = jump;

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	while (low <= high)
	{
		print_subarray(array, low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
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
