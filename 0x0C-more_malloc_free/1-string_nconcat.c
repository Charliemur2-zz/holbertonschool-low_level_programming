#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate tow strings
 * @s1: string one
 * @s2: string tow
 * @n: number of s2 to copy
 * Return: NULL or p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i = 0, j = 0, leng1 = 0, lengp = 0;
	unsigned int k = 0, leng2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		leng1++, i++;
	i = 0;
	while (s2[i] != '\0')
		leng2++, i++;
	lengp = leng1 + leng2;
	p = malloc(sizeof(char) * (lengp + 1));
	if (p != '\0')
	{
		j = 0;
		while (j < leng1)
			p[j] = s1[j], j++;
		if (n >= leng2)
		{
			while (k < leng2)
				p[j] = s2[k], j++, k++;
			p[lengp + 1] = '\0';
		}
		else
		{
			while (k < n)
			{
				p[j] = s2[k], k++, j++;
			}
		}
	}
	else
		return (NULL);
	return (p);
}
