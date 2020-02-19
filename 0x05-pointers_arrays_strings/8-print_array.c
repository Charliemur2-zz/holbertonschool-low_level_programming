#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print all the contents of a array
 * @a: the array
 * @n: the position of the array
 */
void print_array(int *a, int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		if (c == n - 1)
		{
			printf("%d", a[c]);
		}
		else
		{
			printf("%d, ", a[c]);
		}
		c++;
	}
	printf("\n");
}
