#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string with the binary
 * Return: unsdigned integer number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		i++;
	}
	i = 0;
	while ((b[i] == '0') || (b[i] == '1'))
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);
}
