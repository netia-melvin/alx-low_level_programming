#include "lists.h"

/**
 * add_nodeint - Adds a new melvins at the beginning
 *               of a single listint_t list.
 * @head: A points to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function equals to  NULL.
 *         if not, returns the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
