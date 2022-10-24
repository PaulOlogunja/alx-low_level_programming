#include <stdio.h>

/**
 * main - Prints the numbers of base 16 in lowercase
 *
 * Return: Numbers of base 16
 */
int main(void)
{
	int h;

	for (h = '0'; h <= '9'; h++)
		putchar(h);
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);
	putchar('\n');

	return (0);
}
