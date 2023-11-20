#include "lists.h"

/**
 * print_listint - Prints elements of a linked list.
 * @h: Entry point to the list.
 * Return: Number of nudes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
