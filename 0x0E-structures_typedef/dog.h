#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @age: age of the dog
 * @name: name of dog
 * @owner: owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif /* endif DOG_H */
