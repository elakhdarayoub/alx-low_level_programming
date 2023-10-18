#include "main.h"

/**
 * strcpy - Copies a string to another array.
 * @dest: The distination buffer.
 * @src: The source string.
 *
 * Description: Copies a string to a different buffer.
 * Return: A pointer to string.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	/* Calculates the leng of src */
	while (src[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
