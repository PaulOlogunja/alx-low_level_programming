#include <stdio.h>

/**
 * main - prints a combination of two double digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, d, e, f;

	for (c = 48; c <= 57; c++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (e = 48; e <= 57; e++)
			{
				for (f = 48; f <= 57; f++)
				{
					if (((e + f) > (c + d) &&  e >= c) || c < e)
					{
						putchar(c);
						putchar(d);
						putchar(' ');
						putchar(e);
						putchar(f);
						if (c + d + e + f == 227 && c == 57)
							break;

						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
