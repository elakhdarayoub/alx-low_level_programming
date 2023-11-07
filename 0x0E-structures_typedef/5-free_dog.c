#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a structure from memo.
 * @d: The structure instance.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
