#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate through the array
 * @array: itegers
 * @size: size of array
 * @action: printing the int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
