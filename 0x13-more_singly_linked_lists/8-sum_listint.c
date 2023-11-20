#include "lists.h"

/**
 * sum_listint - Adds the element of a list.
 * @head: Entry point of the list.
 * Return: The sum of integers inside the list.
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
		return (0);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
