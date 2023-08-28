#include "lists.h"

/**
 * print_listint - function print all list elements
 * @h: first element on list
 * Return: nodes num (Success), fail (NULL)
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
