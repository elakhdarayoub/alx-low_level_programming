#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Implementation of realloc function.
 * @ptr: The previously allocated memory.
 * @old_size: The old size of previou memory.
 * @new_size: The size of the new allocated memory.
 * Return: Pointer to the new memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_space;

	if (ptr == NULL)
	{
		new_space = malloc(newsize);
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}
	else if (new_size = 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	
}
