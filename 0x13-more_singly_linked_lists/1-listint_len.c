#include "lists.h"

/**
 * listint_len - function prints number of linked list elems
 * @h: first element on list
 * Return: nodes num (Success), fail (NULL)
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_num = 0;

		while (h != NULL)
		{
		h = h->next;
		nodes_num++;
		}
		return (nodes_num);
}
