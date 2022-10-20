#include "main.h"

/**
 * _islower - checks fpr lowercase character
 *
 * @c: letter input
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
