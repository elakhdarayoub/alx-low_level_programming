#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list.
 * @head: A pointer to The head pointer.
 * @str: The string to add.
 * Return: A pointer.
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL || *head == NULL)
		return (NULL);
	head->str = strdup(str);
	return (*head);
}
