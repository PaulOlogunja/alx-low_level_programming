#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: source array
 * @c: character to find
 *
 * Return: the character from the string found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}

	return ('\0');
}
