#include "lists.h"

/**
 * free_listint2 - Frees a list again.
 * @head: A double pointer to the list entry point.
 *
 * Description: Frees a list but sets its entry to NULL;
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (*head == NULL)
		return;

	if (*head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*head = current;
	}
}
