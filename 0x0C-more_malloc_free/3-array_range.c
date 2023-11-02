#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of inegers.
 * @min: Minimum of ints.
 * @max: Maximum of ints.
 * Return: int.
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
