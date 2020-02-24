#include "holberton.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 * @s: string s
 * @accept: take this bytes
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	int c;
	int i;
	int j;
	int leng;

	leng = 0;
	n = 0;
	i = 0;
	while (s[c] != '\0')
	{
		leng++;
		c++;
	}
	leng = leng / 2;
	while (i <= leng)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
			}
			j++;
		}
		i++;
	}
	return (n);
}
