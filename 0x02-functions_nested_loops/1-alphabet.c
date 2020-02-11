#include "holberton.h"

/**
 * print_alphabet - print alphabet and new line
 **/

void print_alphabet(void)

{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
