#include "holberton.h"

/**
 * print_square - print a line
 * @size: number of spaces of the line
 */

void print_square(int size)
{
	int m;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= size; m++)
		{
			for (n = 1; n <= size; n++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
