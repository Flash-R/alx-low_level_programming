#include "main.h"
/**
 * more_functions - print 0 -14 10 times
 * Return: void
*/

void more_numbers(void)
{
	int i = 0, j;

	while (i <= 10)
	{

		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
	}
	_putchar('\n');
}
