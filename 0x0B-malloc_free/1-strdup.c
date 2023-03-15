#include <stdlib.h>
/**
 * _strdup - creates space in memory and copies the string in it.
 * @str: string to be copied to new space.
 * Return: Pointer to new space
 */

char *_strdup(char *str)
{
	char *newAray;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	newAray	= malloc(i * sizeof(*newAray));
	if (newAray == NULL)
		return (NULL);
	while (j < i)
	{
		newAray[j] = str[j];
		j++;
	}
	return (newAray);
}
