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
	int size, k;
	char *arr;

	/* Checks if the str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculating the size of str and allocating the same space for arr */
	size = -1;
	do {
		arr = malloc(sizeof(char));
		if (arr == NULL)
			return (NULL);
		size++;
	} while (str[size] != '\0');

	/* Dublicating the str to arr */
	for (k = 0; k < size; k++)
		arr[k] = str[k];
	return (arr);
}
