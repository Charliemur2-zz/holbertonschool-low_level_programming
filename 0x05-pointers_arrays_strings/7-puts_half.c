#include "holberton.h"

/**
 * puts_half - prints the last half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int n;
	int len;
	int lenodd;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
				 n++;
		}
	}
	else
	{
		n = (len - 1) / 2;
		lenodd = len - n;
		while (str[lenodd] != '\0')
		{
			_putchar(str[lenodd]);
			lenodd++;
		}
	}
	_putchar('\n');
}
