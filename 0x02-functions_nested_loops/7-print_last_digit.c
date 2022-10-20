#include "main.h"

/*
 * print_last_digit - Prints the last digit of a number.
 * @n: int to be evaluated.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	int n;

	n = c % 10;

	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
