#include "holberton.h"

/**
 * _islower - check for lowercase
 * @c: letter to be checked
 * Return: 1 for lower case and 0 to uppercase
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
