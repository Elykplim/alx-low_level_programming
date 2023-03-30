#include "lists.h"

/**
 * list_len - return no of elements in a list.
 * @h: singly linked list.
 * Return: no of elements in linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
