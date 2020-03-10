#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print
 * @d: structure
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)");
		else if ((*d).owner == NULL)
			printf("owner: (nil)");
		else
		{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
		}
	}
}
