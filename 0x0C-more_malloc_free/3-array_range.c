#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates and aray wher the min and max ae inclusive
 * @min: the minimum
 * @max: the maximum
 * Return: the pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
