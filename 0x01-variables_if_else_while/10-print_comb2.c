#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 0;
	while (a <= 98)
	{
		putchar((a % 10) + '0');
		putchar(',');
		putchar(' ');
		a++;
	}
	if (a == 99)
		putchar(a);
	return (0);
}
