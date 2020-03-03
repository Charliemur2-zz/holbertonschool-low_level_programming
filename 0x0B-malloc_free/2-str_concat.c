#include "holberton.h"
#include <stdlib.h>

/**
 *  str_concat - concatenate tow strings
 * @s1: string one
 * @s2: string tow
 * Return: NULL or p
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, k = 0, leng1 = 0, leng2 = 0, lengp = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		leng1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		leng2++;
		i++;
	}
	lengp = leng1 + leng2;
	p = malloc(sizeof(char) * (lengp + 1));
	if (p != '\0')
	{
		j = 0;
		while (j < leng1)
		{
			p[j] = s1[j];
			j++;
		}
		while (k < leng2)
		{
			p[j] = s2[k];
			k++;
			j++;
		}
		p[lengp + 1] = '\0';
	}
	else
		return (NULL);
	return (p);
}
