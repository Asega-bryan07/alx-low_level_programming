#include "search_algos.h"
#include <math.h>

/* to compile math.h with gcc, lm is required */

size_t min(size_t a, size_t b);

/**
 * min - returns the minimum number for two values
 *
 * @a: first value
 * @b: second value
 *
 * Return: a if lower of equal to b, otherwise b
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @value: is the value to search for
 * @size: number of elements in array
 *
 * Return: `a` containing `value`, or -1 if value not found
 * else NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);
	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value; low = high, high += jump)
	{
		printf("Value checked array [%lu] = [%d]\n", high, array[high]);
	}

	/* causes a 'FOUND' message even when the value is not in the array */
	printf("Value found between indices [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
