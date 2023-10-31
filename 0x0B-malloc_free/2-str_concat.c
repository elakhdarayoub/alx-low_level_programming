#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Description: Concatenates two strings.
 * Return: Pointer to a new char array or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *arr;

	for (i = 0; s1[i] != '\0'; i++)
	{
		arr = malloc(sizeof(char));
		if (arr == NULL)
			return (NULL);
	}
	i--;
	j = 0;
	do {
		arr = malloc(sizeof(char));
		if (arr == NULL)
			return (NULL);
	} while (s2[j++] != '\0');

	for (k = 0; k < i; k++)
		arr[k] = s1[k];
	for (k = 0; k < j - 1; k++)
		arr[i + k] = s2[k];
	arr[i + k] = '\0';
	return (arr);
}
