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
	char *arr, *copy;
	int size, k;

	if (str == NULL)
		return (NULL);

	/* copying the base address to copy pointer to manupilate the array */
	copy = str;

	/* Calculating the size of str */
	for (size = 0; str[size] != '\0'; size++)
		;

	/*
	 * Allocating size of bytes for arr and
	 * make sure the wanted space is available
	 */
	while (*copy++ >= '\0')
	{
		arr = malloc(sizeof(char));
		if (arr == NULL)
			return (NULL);
	}

	/* Dublicating the str to arr */
	for (k = 0; k < size; k++)
		arr[k] = str[k];
	return (arr);
}
