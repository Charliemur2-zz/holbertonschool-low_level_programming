#include "holberton.h"

/**
 * _islower - check for lowercase
 * @c: letter to be checked
 * Return: 1 for lower case and 0 to uppercase
 */

int _islower(int c)
{
	if (c < 91 && c > 64)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
