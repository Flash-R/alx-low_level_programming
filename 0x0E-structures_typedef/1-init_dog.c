#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a dog struct
 * @d: memory of dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
