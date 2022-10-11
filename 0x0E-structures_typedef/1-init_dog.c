#include "dog.h"
#include "1-main.c"
#include "main.h"
#include "_putchar.c"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to the structure
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
