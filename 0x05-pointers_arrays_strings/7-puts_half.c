#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string input
 * Return: Second half of given string
 */
void puts_half(char *str)
{
	int c, n, length_of_the_string;

	length_of_the_string = 0;

	for (c = 0; str[c] != '\0'; c++)
		length_of_the_string++;

	n = (length_of_the_string / 2);

	if (length_of_the_string % 2 == 1)
		n = ((length_of_the_string + 1) / 2);

	for (c = n; str[c] != '\0'; c++)
		_putchar(str[c]);

	_putchar('\n');
}
