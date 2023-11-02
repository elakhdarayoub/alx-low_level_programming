#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: Numbers of bytes to allocate.
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
		exit(98);
	else
		return (alloc);
}
