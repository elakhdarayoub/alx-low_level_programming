#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The structure name.
 * @name: Name of the instance.
 * @age: The age of the instance.
 * @owner: Name of the instance owner.
 *
 * Description: Creates a Dog instances.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
