#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x, q;

	x = 0;

	while (x < 10)
	{

		for (q = 'a'; q <= 'z'; q++)
		{
			_putchar(q);
		}
		x++;
		_putchar('\n');
	}
}
