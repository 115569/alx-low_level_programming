#include "lists.h"

/**
 * sum_listint - function prints all sum n data in linked list
 * @head: list head
 * Return: all sum of n data (Success), fail (NULL),
 * 0 (list is empty)
 */

int sum_listint(listint_t *head)
{
	int sum_data;

	sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
