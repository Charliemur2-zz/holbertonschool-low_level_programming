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
	int i;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == '\0')
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
