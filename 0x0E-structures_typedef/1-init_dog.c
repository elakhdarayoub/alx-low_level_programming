#include "dog.h"

/**
 * init_dog - Initialize a dog structure.
 * @d: Instance name.
 * @name: Instance name.
 * @age: Instance age.
 * @owner: Instance owner.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *inst;

	inst = d;

	inst->name = name;
	inst->age = age;
	inst->owner = owner;
}
