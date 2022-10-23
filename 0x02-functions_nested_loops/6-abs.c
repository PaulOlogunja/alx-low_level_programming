#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @abs: the given number
 *
 * Return: Absolute value of given number
 */
int _abs(int abs)
{
	if (abs < 0)
	{
		int abs_val;

		abs_val = abs * -1;
		return (abs_val);
	}
	return (abs);
}
