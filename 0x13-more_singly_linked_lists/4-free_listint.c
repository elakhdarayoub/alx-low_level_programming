#include "lists.h"

/**
 * free_listint - Frees a list from memory.
 * @head: The list entry point.
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}
