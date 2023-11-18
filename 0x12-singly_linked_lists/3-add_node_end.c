#include "lists.h"

/**
 * add_node_end - Add a newnode at the end of list.
 * @head: Entry point to the list.
 * @str: The string to add to the node.
 * Return: The address of new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	temp = malloc(sizeof(list_t));
	if (temp != NULL)
	{
		temp->str = strdup(str);
		temp->len = strlen(temp->str);
		temp->next = NULL;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	return (ptr->next);
}
