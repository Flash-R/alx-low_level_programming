#include <stdlib.h>

/**
 * _calloc - allocates memory to array
 * @nmemb: number of intems in array
 * @size: size of members
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb *size);
	if (p ==NULL)
		return (NULL);
	return (p);
}
