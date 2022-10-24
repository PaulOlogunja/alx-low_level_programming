#include <stdio.h>

/**
 * main - prints the alphabet from z to a
 *
 * Return: The alphabet From z to a
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
