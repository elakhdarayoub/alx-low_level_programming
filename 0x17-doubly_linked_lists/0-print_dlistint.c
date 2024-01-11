#include "lists.h"

/**
 * print_dlistint - Prints the content of a doubly linked list
 * @h: Head of list
 *
 * Return: Number of elements.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
