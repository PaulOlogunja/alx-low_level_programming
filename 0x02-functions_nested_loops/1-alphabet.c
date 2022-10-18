#include "main.h"

/**
 * print_alphabet - a program that prints out a-z
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
