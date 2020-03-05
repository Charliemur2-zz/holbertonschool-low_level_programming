#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array of numbers
 * @min: min number
 * @max: max number
 * Return: NULL, p
 */

int *array_range(int min, int max)
{
	int leng;
	int *p;
	int i;

	if (min > max)
		return (NULL);
	leng = max - min;
	p = malloc(sizeof(int) * (leng + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (leng + 1); i++)
		p[i] = min++;
	return (p);
}
