#include "holberton.h"

/**
 * times_table - print the 9 table
 */
void times_table(void)
{
	int i = 0, j, r;

	_putchar('0');
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			r = i * j;
			if (j == 9)
			{
				if (r <= 9)
					_putchar(r + '0');
				if (r > 9)
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			else
			{
				if (r <= 9)
				{
					_putchar(r + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (r > 9)
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
