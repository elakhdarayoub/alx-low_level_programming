#include "lists.h"

/**
 * add_nodeint_end - Adds a note to the end of a list.
 * @head: The beginning of the list.
 * @n: The node Data.
 * Return: Address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current;

	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current++;
		current->next = newNode;
	}
	return (current->next);
}
