#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 *
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 *
 * Return: NULL if value is not in the head of a list
 *
 * Description: Every time you compare a value in the list to
 * the value you are searching, you have to print this value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size &&
			jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value checked at indices [%ld] and [%ld]\n", node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] and [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] and [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
