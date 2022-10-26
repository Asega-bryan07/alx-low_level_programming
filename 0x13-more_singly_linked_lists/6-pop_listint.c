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
	listint_t *temp;
	int n;

	temp = head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
