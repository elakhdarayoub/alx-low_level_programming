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
