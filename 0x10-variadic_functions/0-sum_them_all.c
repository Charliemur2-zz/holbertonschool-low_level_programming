#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - add all the numbers
 * @n: ammount of numbers
 * Return: add
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, add = 0;
	va_list nums;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		add = add + va_arg(nums, unsigned int);
	}
	va_end(nums);
	return (add);
}
