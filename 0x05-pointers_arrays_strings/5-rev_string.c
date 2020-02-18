#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int len;
	int temp;
	int aum;
	int lentemp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	lentemp = len - 1;
	aum = 0;
	while (aum < lentemp)
	{
		temp = s[aum];
		s[aum] = s[lentemp];
		s[lentemp] = temp;
		aum++;
		lentemp--;
	}
}
