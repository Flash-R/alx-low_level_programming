#include <stdio.h>
/**
 * main - prints the digits on the stardard output
 * Return: prints zero if success
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
