#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints the element of a structure.
 * @d: The instance to print.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");

		if (d->age)
			printf("Age: %lf\n", d->age);
		else
			printf("(nil)\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
