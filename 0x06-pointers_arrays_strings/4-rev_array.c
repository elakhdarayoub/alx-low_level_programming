#include "main.h"

/**
 * reverse_array - Reverse array.
 * @a: The array.
 * @n: Number of array's elements.
 *
 * Description: Reverse the order of an arrays elements.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}

}
