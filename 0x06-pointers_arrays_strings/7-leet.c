#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @a: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *a)
{
	int i, j;
	int letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == letter[j])
			{
				a[i] = num[j / 2];
				j = 9;
			}
		}
	}
	return (a);
}
