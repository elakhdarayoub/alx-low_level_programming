#include "main.h"

/**
 * binary_to_uint - Converts a binary to uint.
 * @b: String of binary values.
 * Return: unsigned int or NULL at failure.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += pow((b[i] - '0'), i);
	}
	
	return (result);
}
