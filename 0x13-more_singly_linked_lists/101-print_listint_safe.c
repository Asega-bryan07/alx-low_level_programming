#include "lists.h"
#include <stdlib.h>
#include  <stdio.h>
/**
 * free_listp_t - frees a linked list
 *
 * @head: head of the list
 * Return: no return
 */
void free_listp_t(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr == *head;

		while ((*temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 *
 * @head: head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listint_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%pp] %d\n", (void *)head, head->n);
				free_listp_t(&hptr);
				return (nnodes);
			}
		}

		printf("-> [%pp] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp_t(&hptr);
	return (nnodes);
}
