#include <stdio.h>
#include "dog.h"

/**
 * fre_dog - frees the dog memory
 * @d: the objet of dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
