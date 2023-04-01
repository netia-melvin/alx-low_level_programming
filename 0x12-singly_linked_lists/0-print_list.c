#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * 0-print_list.c - prints all list elements
 * Returns the number of nodes
 *
*/

size_t print_list(const list_t *h);
{
	int count = 0;

	while (h)
	{
		if(h->str ==NULL)
		{
			printf("[0] (nil)\n");

		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;

	}
	return (count);

}
