#include "holberton.h"

/**
 * _isdigit - checks a digit 9 throught 0
 * @c: integer to evaluate
 * Return: 1 for a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
