#include "holberton.h"

/**
 * print_numbers - print number from 0 to 9
 */

void print_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
