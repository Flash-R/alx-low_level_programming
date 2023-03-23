#include "function_pointers.h"

/**
 * int_index - a function that compares two ints
 * @array: array od elements
 * @size: number of items
 * @cmp: number of items
 * Return: -1 if fail or an index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
