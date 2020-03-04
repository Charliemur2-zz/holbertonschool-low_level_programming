#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - bidimensional array
 * @width: width
 * @height: heigth
 * Return: p NULL
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	p = malloc(width * sizeof(int *));
	if (p != '\0')
	{
		for (i = 0; i < width; i++)
		{
			p[i] = malloc(height * sizeof(int));
			for (j = 0; j < height; j++)
			{
				p[i][j] = 0;
			}
		}
		return (p);
	}
	else
	{
		free(p);
		return (NULL);
	}
	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
}
