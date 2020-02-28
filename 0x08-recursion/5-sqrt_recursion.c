#include "holberton.h"

/**
 * _sqrt_aux - search y
 * @n: number to aply the squar root
 * @y: number to evaluate
 * Return: -1, y
 */
int _sqrt_aux(int n, int y)
{
	if (n < (y * y))
	{
		return (-1);
	}
	else if (n == y * y)
		return (y);
	else
		return (_sqrt_aux(n, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to evaluate
 * Return: y
 */

int _sqrt_recursion(int n)
{

	return (_sqrt_aux(n, 1));
}
