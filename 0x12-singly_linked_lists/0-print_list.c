#include "lists.h"
/**
 * print_list - Prints elements of a list_t list.
 * @h: Singly linked list.
 * Return: No of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem++;
	}
	return (elem);
}
