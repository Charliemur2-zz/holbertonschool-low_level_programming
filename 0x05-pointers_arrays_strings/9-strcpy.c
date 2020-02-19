#include "holberton.h"
/**
 * _strcpy - copy a string in other
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
