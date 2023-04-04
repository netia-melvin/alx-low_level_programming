#include "lists.h"

/**
 * add_nodeint_end - Adds a mel node at the
 *                   end of a listint_t list.
 * @head: A points to the address of the
 *        head of the listint_t list.
 * @n: The integer for the mel node to contain.
 *
 * Return: If the function becomes NULL.
 *         else, return the new element address.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mel, *end;

	mel = malloc(sizeof(listint_t));
	if (mel == NULL)
		return (NULL);

	mel->n = n;
	mel->next = NULL;

	if (*head == NULL)
		*head = mel;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = mel;
	}

	return (*head);
}
