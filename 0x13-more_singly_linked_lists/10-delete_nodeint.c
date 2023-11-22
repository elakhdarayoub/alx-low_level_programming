#include "lists.h"

/**
 * listint_len - Prints the length of list.
 * @h: Entry point to a list.
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int count = 1;

	if (h == NULL)
		return (0);
	count += listint_len(h->next);
	return (count);
}

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

	if (head == NULL)
		return (NULL);
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
	listint_t *previousNode, *delete, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (!(*head)->next)
			free(*head);
		else
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		return (1);
	}
	else if (listint_len(*head) > index)
	{
		previousNode = get_nodeint_at_index(*head, index - 1);
		delete = previousNode->next;
		previousNode->next = delete->next;
		free(delete);
		return (1);
	}
	else if (listint_len(*head) == index)
	{
		previousNode = get_nodeint_at_index(*head, index - 1);
		free(previousNode->next);
		return (1);
	}
	return (-1);
}
