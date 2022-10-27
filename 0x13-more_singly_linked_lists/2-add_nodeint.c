#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 *
 * @head: pointer to the head of the list
 * @n: the integer to use as parameter
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (head);
}
