#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print all the letters execpt q and e
 * in lower cases followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
