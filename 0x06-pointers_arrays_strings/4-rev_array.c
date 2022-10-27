#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, d;

	for (i = 0; i < n; i++)
	{
		n--;
		d = a[i];
		a[i] = a[n];
		a[n] = d;
	}
}
