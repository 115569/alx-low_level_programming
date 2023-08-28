#include "lists.h"

/**
 * reverse_listint - this func prints a reversed linked list
 * @head: list head
 * Return: the first node address pointer (SUccess), fail (NULL)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n;
	listint_t *p;

	n = NULL;
	p = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
