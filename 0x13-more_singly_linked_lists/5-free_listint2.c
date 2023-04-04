#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @h: Points to the address of the listint_t list.
 *
 * D: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;

	while (*head)
	{
	i	h = (*head)->next;
		free(*head);
		*head = h;
	}

	head = NULL;
}
