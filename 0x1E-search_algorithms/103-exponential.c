#include "search_algos.h"
int binary_search_helper(int *array, int value, size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - the minimum number of values  for size_t
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, otherwise `b`
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - searches for values in an array of integers using
 * a binary search algorithm
 *
 * @array: pointer to the first element of an array
 * @value: value to search for
 * @low: starting index
 * @high: the ending index
 *
 * Return: index containing `value` or -1 if value is not found
 * else a NULL array
 */

int binary_search_helper(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}
	return (-1);
}

/**
 * exponential_search - seaarches for a value in a sorted array of
 * integers using an Exponential searching algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: first index having `value` or -1 if value is not found
 * else a NULL array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array [%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	/* 'found' msg is generated even if the array[high] < value */
	printf("Value found between indices [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
