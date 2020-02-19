#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 */

void puts2(char *str)
{
	int cas;

	cas = 0;
	while (str[cas] != '\0')
	{
		if (cas % 2 == 0)
		{
		_putchar(str[cas]);
		}
		cas++;
	}
	_putchar('\n');
}
