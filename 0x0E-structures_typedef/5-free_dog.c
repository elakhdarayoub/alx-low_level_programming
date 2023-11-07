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
	free(d);
}
