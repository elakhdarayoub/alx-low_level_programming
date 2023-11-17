#include "lists.h"

/**
 * free_list - Frees a list.
 * @head: The head of list.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free(head->next);
	free(head);
}
