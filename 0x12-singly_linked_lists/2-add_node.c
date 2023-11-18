#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list.
 * @head: A pointer to The head pointer.
 * @str: The string to add.
 * Return: A pointer.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp, *current;

	temp = malloc(sizeof(list_t));
	if (temp != NULL)
	{
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = NULL;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	current = *head;

	temp->next = current->next;
	current->next = temp;
	return(current);
}
