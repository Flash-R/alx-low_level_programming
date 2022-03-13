#include <stdio.h>
/**
 * main - prints on the standard output
 * Return: returns zero when success
*/

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	return (0);
}
