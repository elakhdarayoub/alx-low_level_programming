#include "function_pointers.h"

/**
 * array_iterator - Applies a function on array elements.
 * @array: The array to operates on.
 * @size: Size of the array being proccessed.
 * @action: A pointer to a function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
