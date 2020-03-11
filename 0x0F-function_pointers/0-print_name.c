#include "function_pointers.h"
/**
 * print_name - print name
 * @name: trhe name
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
