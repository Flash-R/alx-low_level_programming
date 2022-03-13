#include <stdio.h>
/**
 * main - print the answers to stdout
 * Return: give 0 when success
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
