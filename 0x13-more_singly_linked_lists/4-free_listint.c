#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Points to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
