#include "lists.h"

/**
 * add_nodeint_end - this function prints a new node at end of linked list
 * @head: a list head
 * @n: n element
 * Return: a new element address (Success), fail (NULL)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_num;
	listint_t *temp;

	(void)temp;

	new_num = malloc(sizeof(listint_t));

	if (new_num == NULL)
	{
		return (NULL);
	}

	new_num->n = n;
	new_num->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = new_num;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_num;
	}

	return (*head);
}
