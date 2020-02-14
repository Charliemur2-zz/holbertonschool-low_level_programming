#include "holberton.h"

/**
 * print_triangle - print a line
 * @size: number of spaces of the line
 */

void print_triangle(int size)
{
	int m;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (m = 1; m <= size; m++)
	{
		for (n = 1; n <= size; n++)
		{
			if (n <= (size - m))
			{
				_putchar(' ');
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
