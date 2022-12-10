#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int singles = '0';
	int doubles = '0';

	for (doubles = 0; doubles <= 9; doubles++)
	{
		for (singles = 0; singles <= '9'; singles++)
		{
			if (!((doubles > singles) || (singles == doubles)))
			{
				putchar(doubles + '0');
				putchar(singles + '0');

				if (!((singles == 9) && (doubles == 8)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
