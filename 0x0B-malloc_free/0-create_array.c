#include <stdlib.h>
/**
 * create_array - creates an array of a specfic size.
 * @size: size of the array
 * @c: character to intiatilaize array
 * return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	else
		arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);

}
