#include "holberton.h"

/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 15. -15 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;

	while (s1[s1len] != '\0')
	{
		s1len++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	if (s1len > s2len)
	{
		return (15);
	}
	else if (s1len == s2len)
	{
		return (0);
	}
	else
	{
		return (-15);
	}
}
