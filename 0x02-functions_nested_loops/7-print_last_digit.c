#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n*(-1) % 10) + '0');
	}
	return (n);
}
