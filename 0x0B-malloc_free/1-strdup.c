#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Dublicates a string in a newly allocated space.
 * @str: The string to dublicate.
 *
 * Description: Dublicates a string in a dynamically allocated space.
 * Return: Base address of a char array.
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *arr;

	/* Checks if the str is NULL */
	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	arr = malloc(size * sizeof(*str) + 1);

	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			arr[i] = str[i];
	}
	return (arr);
}
