#include <stdio.h>

/**
 * main - Use putchar to print 0 to 9
 *
 * Return: Numbers 0 to 9
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
