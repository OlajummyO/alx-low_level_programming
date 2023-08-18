#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlist_t list.
 * @h: the head of the dlist_t list
 *
 * Return: The numbver of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;

		printf("%d\n", h->n);

		h = h->next;
	}

	return(nodes);
}
