#include "lists.h"

/**
 * dlistint_len - Prints the number of elements in a doubly linked list
 * @h: The head of list.
 *
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
