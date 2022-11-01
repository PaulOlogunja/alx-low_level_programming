#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 *
 * @a: the 2d array
 * @size: the size
 *
 * Return: sum of the diagonals
 */
void print_diagsums(int *a, int size)
{
	int n, sum1 = 0, sum2 = 0;

	for (n = 0; n < size; n++)
	{
		sum1 += a[(size + 1) * n];
		sum2 += a[(size - 1) * (n + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
