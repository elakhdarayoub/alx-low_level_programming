#include "lists.h"

/**
 * listint_len - Prints the length of list.
 * @h: Entry point to a list.
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int count = 1;

	if (h == NULL)
		return (0);
	count += listint_len(h->next);
	return (count);
}
