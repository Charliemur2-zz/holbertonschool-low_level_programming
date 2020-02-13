#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int n, m;

	m = 0;
	while (m <= 9)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
			_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		m++;
	}
}
