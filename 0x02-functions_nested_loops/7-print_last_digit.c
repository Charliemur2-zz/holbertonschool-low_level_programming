#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @r: number
 * Return: always 0
 */

int print_last_digit(int r)
{
	if (r >= 0)
	{
		_putchar((r % 10) + '0');
	}
	else
	{
		_putchar(((r * (-1)) % 10) + '0');
	}
	return (r);
}
