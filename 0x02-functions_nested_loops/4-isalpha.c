#include "holberton.h"

/**
 * _isalpha - checks for alphabetic caracter
 * @c: parameter to be checked
 * Return: 1 if is a letter or uppercase and 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
