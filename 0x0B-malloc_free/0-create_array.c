#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: Size of the array.
 * @c: A char to initialize the array with.
 *
 * Description: Creates an array of chars and initialize it.
 * Return: The array base address.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
