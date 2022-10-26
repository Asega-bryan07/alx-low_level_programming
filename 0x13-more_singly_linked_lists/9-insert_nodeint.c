#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 *
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node will be added
 * @n: value of the new node to be added
 * Return: pointer to the new node, 0 otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		retirn (NULL);

	new-> n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	if (temp == NULL || temp->next == NULL)
		return (NULL);

	temp->next = temp->next;
	temp->next = new;

	return (new);
}
