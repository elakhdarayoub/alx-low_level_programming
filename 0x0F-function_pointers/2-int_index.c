#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array to search.
 * @size: The size of the array.
 * @cpm: The compare function to pass to the function.
 *
 * Return: The index of the integer inside the array.
 */
int int_index(int *array, int size, int (*cpm)(int))
{
	if (size <= 0)
		return (-1);

	if (array && cpm)
	{
		int i;

		for (i = 0; i < size; i++)
			if (cpm(array[i]) != 0)
				return (i);
	}
	return (-1);
}
