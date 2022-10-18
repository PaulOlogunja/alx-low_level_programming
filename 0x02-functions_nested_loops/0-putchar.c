#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main (void)
{
	char *nm = "_putchar";
	while (*nm)
	{
		_putchar(*nm);
		nm++;
	}
	_putchar('\n');
	return (0);
}	
