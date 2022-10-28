#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @a: string input
 *
 * Return: Capitalized string
 */
char *cap_string(char *a)
{
	int i, j;
	int c = 32;
	int sept[] = {',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - c;
		}

		c = 0;

		for (j = 0; j <= 12; j++)
		{
			if (a[i] == sept[j])
			{
				j = 12;
				c = 32;
			}
		}
	}
	return (a);
}
