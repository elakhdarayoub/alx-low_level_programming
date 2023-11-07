#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints the file it was compiled from.
 * Return: 0
 */
int main(void)
{
	printf("The file name is : %s\n", __FILE__);
	return (0);
}
