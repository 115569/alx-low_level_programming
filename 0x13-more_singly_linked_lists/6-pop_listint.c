#include "lists.h"

/**
 * pop_listint - the func deletes linked list head node
 * @head: lists head
 * Return: empty link list (Success), head node is not empty (NULL)
 */

int pop_listint(listint_t **head)
{
	int node_h;
	listint_t *h;
	listint_t *curr_h;

	if (*head == NULL)
	{
		return (0);
	}

	curr_h = *head;

	node_h = curr_h->n;

	h = curr_h->next;

	free(curr_h);

	*head = h;

	return (node_h);
}
