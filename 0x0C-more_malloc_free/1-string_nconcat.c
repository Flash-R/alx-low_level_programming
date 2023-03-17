#include <stdlib.h>
/**
 * string_nconcat: concatinates the first string with the first n bytes of the second string
 * @s1: first string
 * @s2: second string
 * @n: n bytes of second string
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int x;
	unsigned int y;
	char *nul;

	nul = "";
	x = y = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	y++;
	if (n >= y)
		n = y;
	new = malloc(sizeof(new) * n + (x + 1));
	if (new == NULL)
		return(NULL);
	x = 0;
	while (s1[x] != '\0')
	{
		new[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0' && y < n)
	{
		new[x] = s2[y];
		x++;
		y++;
	}
	new[x] = '\0';
	return (new);
}
