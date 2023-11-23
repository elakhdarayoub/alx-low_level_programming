#include <stdio.h>

void print_before(void) __attribute__ ((constructor));

/**
 * print_before - Prints before main.
 * Return: void.
 */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

/**
 * main - Entry point.
 *
 * Return: 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
