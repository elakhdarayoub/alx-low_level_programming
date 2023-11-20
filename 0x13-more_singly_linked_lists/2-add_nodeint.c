#include "lists.h"

/**
 * add_nodeint - Adds a node to the beginning of a list.
 * @head: Head of the list.
 * @n: Data of the new node.
 * Return: Address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	/* If there is no list yet */
	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head)
		{
			(*head)->n = n;
			(*head)->next = NULL;
		}
		else
			return (NULL);
		return (*head);
	}

	/* If the list already exist */
	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	else
		return (NULL);
	return (*head);
}
