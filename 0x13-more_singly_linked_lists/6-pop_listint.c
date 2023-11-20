#include "lists.h"

/**
 * pop_listint - Deletes the head element.
 * @head: A double pointer to a list.
 * Return: The deleted item data.
 */
int pop_listint(listint_t **head)
{
	int Data;
	listint_t *next;

	if (*head == NULL)
		return (0);
	Data = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (Data);
}
