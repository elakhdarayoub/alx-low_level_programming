#include <unistd.h>

/**
 * main - entry point
 *
 * Description: using write func to output data stream.
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
