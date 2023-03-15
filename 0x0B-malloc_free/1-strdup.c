#include <stdlib.h>
/**
 * strdup - creates space in memory and copies the string in it.
 * @str: string to be copied to new space.
 * Return: Pointer to new space
 */

char *_strdup(char *str)
{
	int i =0;
	int len = 0;
	int j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != "\0")
	{
		i++;
	}
	char *newAray = malloc(len * sizeof(char);
	while (j < len)
	{
		newAray[j] = str[j];
		j++;
	}
	return newAray;
}
