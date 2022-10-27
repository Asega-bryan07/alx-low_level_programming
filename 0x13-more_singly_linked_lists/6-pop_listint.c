#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: pointer to the head of the linked list
 * Return: head node's data (n) or 0 - if the linked
 * list is empty
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;
	h = curr->next;
	free(curr);

	*head = h;

	return (hnode);
}
