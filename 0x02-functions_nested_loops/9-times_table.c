#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int r, c, m;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c =  1; c <= 9; c++)
		{
			m = (c * r);
			if ((m / 10) > 0)
			{
				_putchar((m / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((m % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
