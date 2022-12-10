#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */

int main(void)
{
	char c;
	int d;

	for (d = 0; d < 10; d++)
		putchar(d + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
		putchar('\n');

	return (1);
}
