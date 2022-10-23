#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @ld: given number
 * Return: The last digit of the given number
 */

int print_last_digit(int ld)
{
	int nld;

	nld = ld % 10;
	if (nld < 0)
	{
		nld = nld * -1;
	}
	_putchar(nld + '0');
	return (nld);
}
