#include "lists.h"

/**
 * list_len - Gets the number of elements in a linked list.
 * @h: Pointer to a list.
 * Return: The length of a list.
 */
size_t list_len(const list_t *h)
{
	int elements = 1;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
		elements += list_len(h->next);
	return (elements);
}
