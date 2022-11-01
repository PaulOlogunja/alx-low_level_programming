#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: located string
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return ('\0');
}
