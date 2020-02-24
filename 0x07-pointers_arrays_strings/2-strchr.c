#include "holberton.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 *  in the string s
 * @s: string
 * @c: constant
 * Return: p
 */

char *_strchr(char *s, char c)
{
	char *p;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return (0);
}
