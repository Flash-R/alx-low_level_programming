#include <stdlib.h>
/**
 * malloc_checked - returns the pointer
 * @b: size
 * Return: address or 98;
 */

void *malloc_checked(unsigned int b)
{
	void *s;
	s = malloc(b);
	if (s == NULL)
		exit(98);
	else
		return (s);
}
