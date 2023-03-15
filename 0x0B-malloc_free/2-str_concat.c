#include <stdlib.h>
/**
 * str_concat - concats two strings.
 * @s1: first string
 * @s2: second string
 * Return: the pointer to new longer string.
 */

char *str_concat(char *s1, char *s2)
{
	char *longstr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int total = 0;
	unsigned int i = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}
	total = len1 + len2;
	longstr = malloc(total * sizeof(*longstr));
	while (i < len1)
	{
		longstr[i] = s1[i];
		i++;
	}
	unsigned int j = 0;
	while (j < len2)
	{
		longstr[i] = s2[j];
		j++;
		i++;	
	}
	return (longstr);
}
