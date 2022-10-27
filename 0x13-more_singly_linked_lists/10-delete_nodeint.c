#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted starting from 0 index
 * Return: 1 for success, and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);

		next = next->next;
		free(next);
	}
	else 
	{
		free(prev);
		*head = next;
	}
	return (1);
}
