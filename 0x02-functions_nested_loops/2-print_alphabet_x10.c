#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x,q;

	q = 0;

	while(q < 11)
	{

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		q++;
		_putchar('\n');
	}
}
