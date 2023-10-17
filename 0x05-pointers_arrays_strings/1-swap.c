#include "main.h"

/**
 * swap_int - Swap the value of two ints.
 * @a: The first int.
 * @b: The second int.
 *
 * Description: Swaping the values of a and b.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
