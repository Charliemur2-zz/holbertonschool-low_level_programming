#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: " ,"
 * @n: ammount of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *st;

	if (separator != '\0')
	{
		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			st = va_arg(strings, char *);
			if (*st == '\0')
				printf("(nil)");
			if (i == (n - 1))
			{
				printf("%s\n", st);
			}
			else
				printf("%s%s", st, separator);
		}
	}
}
