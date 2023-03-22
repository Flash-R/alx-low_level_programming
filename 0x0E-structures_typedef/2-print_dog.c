#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the values of dog struct
 * @d: struct
 */
void print_dog(struct dog *d)
{
	char *nil = "nil";

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
