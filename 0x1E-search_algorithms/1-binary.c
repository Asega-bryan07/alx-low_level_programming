#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing a 'value'
 * -1 if the value is not found, otherwise NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low, avg, high;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		avg = (low + high) / 2;

		printf("Searching in  array: ");
		for (x = low; x <= high; x++)
		printf("%i%s", array[x], x == high ? "\n" : ", ");

		if (array[avg] < value)
			low = avg + 1;
		else if (array[avg] > value)
			high = avg - 1;
	}

	return (-1);
}
