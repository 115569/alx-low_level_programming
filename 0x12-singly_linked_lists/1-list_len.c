#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
	printf("[%u] %s\n", (h->str ? h->len : 0), (h->str ? h->str : "(nil)"));
	h = h->next;
	s++;
	}

	return (s);
}
