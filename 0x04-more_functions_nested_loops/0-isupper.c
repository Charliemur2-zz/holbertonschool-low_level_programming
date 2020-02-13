#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to evaluate
 * Return: 1 for uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
