#include "holberton.h"

/**
 * print_diagonal - print a diagonal
 * @n: number of spaces of the line
 */

void print_diagonal(int n)
{

	int m;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (s = 2; s <= m; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
