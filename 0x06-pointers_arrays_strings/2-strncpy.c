#include "main.h"

/**
 * _strncpy -  copies a string.
 *
 * @dest: destination string
 * @src: source string
 * @n: numbers of bytes to be copied
 *
 * Return: Resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)

	if (i < n)
		dest[i] = src[i];

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
