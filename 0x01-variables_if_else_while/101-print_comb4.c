#include <stdio.h>

/**
 * main - Program's entry point.
 *
 * Description : Print a combo of 3 digits up to 789.
 * where the digits combo must be in asending order
 * otherwise don't print them.
 *
 * Restrictions: Using only putchar 6 times max.
 * adding ',' and ' ' to each combo but the last one.
 *
 * Return: zero at success.
 *
 * Author: Ayoub Elakhdar as part of ALX SE program.
 */
int main(void)
{
	/* Used int modifiers for memory efficiency */
	unsigned short int i, j, k;

	j = 1;
	k = 2;
	/* The main FOR loop that will generate the first digit up to 7 */
	for (i = 0; i <= 7;)
	{
		/* Checks 1st digit against the 2nd one */
		if (i < j)
		{
			/* Generates the second digit upto 8 */
			for (;j <= 8;)
			{
				/* Checks the 2nd digit against the last one */
				if (j < k)
				{
						
					/* Generates the 3rd digit upto 9 */
					for (; k <= 9; k++)
					{
						/* printing the validated combo */
						putchar(48 + i);
						putchar(48 + j);
						putchar(48 + k);

						/**
				 		* checking if i not equale to 7 which indicats the last combo
				 		* and not add ',' ' ' to it
				 		*/
						if (i != 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
					j++;
				}
			}
			i++;
		}
	}
	putchar('\n');
	return (0);
}
