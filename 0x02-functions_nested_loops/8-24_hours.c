#include "main.h"

/**
 * jack_bauer - prints 00:00 to 23:59.
 *
 * Description: prints the whole day hours.
 * Return: void.
 */
void jack_bauer(void)
{
	short int H, h, M, m, s;
	
	H = h = M = m = s = 0;
	while (H <= 2)
	{
		while (h <= 3)
		{
			while (M <= 5)
			{
				while (m <= 9)
				{
					while (s <= 60)
						s++;
					
					_putchar(48 + H);
					_putchar(48 + h);
					_putchar(':');
					_putchar(48 + M);
					_putchar(48 + m);
					_putchar('\n');

					m++;
					s = 0;
				}
				m = 0;
				M++;
			}
			M = 0;
			h++;
		}
		h = 0;
		H++;
	}
}
