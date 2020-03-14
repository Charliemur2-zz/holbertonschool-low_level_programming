#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all number
 * @separator: " ,"
 * @n: ammount of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			if (separator == NULL)
				printf("%d", va_arg(nums, unsigned int));
			else
				printf("%d\n", va_arg(nums, unsigned int));
		}
		printf("%d%s", va_arg(nums, unsigned int), separator);
	}
}
