#include "search_algos.h"

/**
 * binary_search - searchs for an element in an array uing the binary search
 * algorithm
 * @array: the array to be searched
 * @size: size of the array to be searched
 * @value: target value to be searched in the array
 *
 * Return: On success, it returns the index where the element has been found.
 * On faliure, if the target value is not in the array, it returns -1, and
 * errno is set appropriately.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, i, check;

	check = 0;
	left = 0, right = size - 1;
	while (left <= right)
	{
		printf("Search in array: ");
		for (i = left ; i <= right; i++)
		{
			if (check != 0)
				printf(", ");
			printf("%d", array[i]);
			if (check == 0)
				check = 1;
		}
		putchar('\n');
		check = 0;
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
