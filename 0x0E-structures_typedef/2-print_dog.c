#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print
 * @d: structure
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)");
	if ((*d).age == '\0')
		printf("Name: (nill)");
	if ((*d).owner == NULL)
		printf("Name: (nil)");
	if (d)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
