#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: is the string
 */

void print_rev(char *s)
{
	int c;
	int n;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (n = c - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
