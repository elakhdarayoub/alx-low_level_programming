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
 * delete_nodeint_at_index - Deletes a node at specific index.
 * @head: The list entry point.
 * @index: The node index.
 * Return: 1 at success, 0 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previousNode = NULL, *delete;

	if (*head == NULL)
		return (-1);

	if (index == 0)
		free(*head);
	else if (index == 1)
	{
		delete = get_nodeint_at_index(*head, index);
		if (delete)
			free(delete);
		else
			return (-1);
	}
	else
	{
		previousNode = get_nodeint_at_index(*head, index - 1);
		if (previousNode)
		{
			delete = previousNode->next;
			previousNode->next = delete->next;
			free(delete);
		}
		else
			return (-1);
	}
	return (1);
}
