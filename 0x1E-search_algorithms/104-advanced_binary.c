#include "search_algos.h"

int binary_search_recursion(int *array, int value, size_t low, size_t high);

/**
 * binary_search_recursion - helper to an advanced_binary function,
 * and searches recusrsively for a value in an array of integers
 *
 * @array: pointer to the first element of an array to search
 * @value: value to seach for
 * @low: starting index in array
 * @high: ending index of an array
 *
 * Return: index with `value`, -1 if not found
 * else NULL array
 */
int binary_search_recursion(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (high + low) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value, mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value, low, mid));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: first index with `value`, -1 for unfound value,
 * else NULL array
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
