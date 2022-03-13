#include <stdio.h>
/**
 * main - print the reverse of the letters
 * Return: 0 when success
*/
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
