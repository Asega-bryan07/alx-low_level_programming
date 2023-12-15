#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value:  value to search for
 *
 * Return: pointer to the first node where the value is located
 * NULL if the list is null or value is not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *stop = NULL;

	if (!list)
		return (NULL);

	temp = list;
	while (temp && temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", temp->express->index,
				temp->express->n);
		temp = temp->express;
	}
	stop = temp;
	while (stop && stop->next != stop->express)
		stop = stop->next;
	/* the value poss. lies between 2 express nodes */
	if (temp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n", temp->express->index,
				temp->express->n);
		printf("Value found between indices [%lu] and [%lu]\n", temp->index,
				temp->express->index);
	}
	/* if value greater than last express node, possibly out of list */
	else
		printf("Value found between indices [%lu] = [%lu]\n", temp->index,
				stop->index);

	while (temp != stop && temp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n", temp->index, temp->n);

	if (temp == stop)
		return (NULL);
	return (temp);
}
