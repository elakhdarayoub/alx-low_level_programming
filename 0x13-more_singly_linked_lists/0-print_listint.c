#include "lists.h"

/**
 * print_listint - Prints elements of a linked list.
 * @h: Entry point to the list.
 * Return: Number of nudes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	count++;
	count += print_listint(h->next);
	return (count);
}
