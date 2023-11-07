#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates an instance of dog struct.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 *
 * Return: The new created dog instance.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nameCpy, *ownerCpy;

	nameCpy = name;
	ownerCpy = owner;

	dog_t *newDog;

	newDog->name = *nameCpy;
	newDog->age = age;
	newDog->owner = *ownerCpy;

	if (newDog)
	{
		return (newDog);
	}
	else
		return (NULL);
}

