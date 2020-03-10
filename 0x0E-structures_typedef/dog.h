#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my dog
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
