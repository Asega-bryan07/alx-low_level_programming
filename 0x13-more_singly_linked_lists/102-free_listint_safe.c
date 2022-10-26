#include "lists.h"

/**
 * free_listp9 - frees a linked list
 *
 * @head: head of the list
 * Return: no return
 */
void free_listp9(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - a function that frees a linked list
 * @h: head of the list
 *
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listint_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->ptr = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->ptr)
			{
				*h = NULL;
				free_listint(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp9(&hptr);
	return (nnodes);
}
