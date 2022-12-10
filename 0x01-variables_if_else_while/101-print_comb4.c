#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints all possible different combinations of three digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int triples;
	int doubles;
	int singles;

	for (triples = 0; triples < 10; triples++)
	{
		for (doubles = 0; doubles < 10; doubles++)
		{
			for (singles = 0; singles < 10; singles++)
			{
				if (!((triples > doubles > singles) || (triples == doubles == singles)))
				{
					putchar(triples + '0');
					putchar(doubles + '0');
					putchar(singles + '0');

					if (!((triples == 7) && (doubles == 8) && (singles == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
	}
	return (0);
}
