#include "lists.h"

/**
 * get_nodeint_at_index - Gets (index)nt node in a list.
 * @head: List entry point.
 * @index: The node index, starts at 0.
 * Return: The node or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *Node;
	unsigned int i;

	current = head;
	for (i = 0; i <= index; i++)
	{
		if (current != NULL)
		{
			Node = current;
			current = current->next;
		}
		else
			return (NULL);
	}
	return (Node);
}

/**
 * insert_nodeint_at_index - Insert new node at (idx)nt position.
 * @head: List entry point.
 * @idx: Index to insert node.
 * @n: Node's data.
 * Return: Address of new node or NULL in failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current, *previous;

	/* Creates and initialize a new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);

	/* Insert the node */
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	previous = get_nodeint_at_index(*head, idx - 1);
	current = get_nodeint_at_index(*head, idx);
	if (previous && current)
	{
		newNode->next = current;
		previous->next = newNode;
	}
	else
		return (NULL);
	return (newNode);
}
