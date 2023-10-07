#include <stdio.h>

/**
 * main - Entry point function.
 *
 * description: prints all the alpha [a-z] escaping e and q.
 * Return: 0 at success.
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
