#include "main.h"

/**
 * print_array - prints array content.
 * @a: The array to be printed.
 * @n: The number of elements to be printed.
 *
 * Description: prints the n elements from an array.
 * Return: void.
 */
void print_array(int *a, int n)
{
	short int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
