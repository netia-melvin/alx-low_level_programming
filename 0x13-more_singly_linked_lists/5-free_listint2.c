#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @h: Points to the address of the listint_t list.
 *
 * @d: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *mel;

	if (head == NULL)
		return;

	while (*head)
	{
		mel = (*head)->next;
		free(*head);
		*head = mel;
	}

	head = NULL;
}
