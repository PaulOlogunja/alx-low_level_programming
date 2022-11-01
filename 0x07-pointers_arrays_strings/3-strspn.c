#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 *
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len, check;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				check = 1;
			}
		}
		if (check == 0)
			return (len);
	}
	return (len);
}
