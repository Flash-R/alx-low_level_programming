#include <stdio.h>
/**
 * main - prints the out in the terminal
 * Return: Print 0 when success
*/

int main(void)
{
	int  i;

	i = 48;

	while (i < 58)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);

	return (0);
}
