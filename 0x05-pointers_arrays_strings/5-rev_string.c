#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: The string to reverse.
 *
 * Description: Reverse a string and store it back to the same arr.
 */
void rev_string(char *s)
{
	short int len, i, j;

	len = 0;
	while (s[len] != '\0')
		len++;
	j = len;
	for (i = 0; i < j; i++)
	{
		// Read the last resources maybe you'll find something new.
	       	// Try to use swap idea and revise pre and post increamenting.
		s[i] = s[--len];
		len--;
	}
	s[j] = '\0';
}
