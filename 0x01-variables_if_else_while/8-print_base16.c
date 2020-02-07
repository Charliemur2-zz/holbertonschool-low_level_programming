#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	char a;

	for (c = 0; c <= 9; c++)
		putchar((c % 10) + '0');
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
