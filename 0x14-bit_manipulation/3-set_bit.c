#include "holberton.h"

/**
 * set_bit - set a bit in the index position
 * @n: pointer to binary number
 * @index: position
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
