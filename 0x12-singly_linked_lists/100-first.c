#include <stdio.h>

void run_before_main(void) __attribute__ ((constructor));
/**
 * run_before_main - prints before the main
 */

void run_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
