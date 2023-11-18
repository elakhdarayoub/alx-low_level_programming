#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list.
 * @head: A pointer to The head pointer.
 * @str: The string to add.
 * Return: A pointer.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = strlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
