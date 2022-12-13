#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @k: The last digit to be printed
 *
 * Return: The value of the last digit
 */

int print_last_digit(int k)
{
	 int ka = k % 10;

	if (ka < 0)
		ka *= -1;
	_putchar(ka + '0');
	return (ka);
}
