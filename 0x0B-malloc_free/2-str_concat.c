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
	char *nul = "";
	unsigned int len1;
	unsigned int len2;
	unsigned int j;
	unsigned int i;

	j = i = len1 = len2 = 0;
	if (s1 == NULL)
		s1 = nul;
	else if (s2 == NULL)
		s2 = nul;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	longstr = malloc((len1 + len2) * sizeof(char));
	if (longstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		longstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		longstr[i] = s2[j];
		j++;
		i++;
	}
	longstr[i] = '\0';
	return (longstr);
}
