#include "main.h"
/**
 * print_triangle - prints a triangle of size size.
 * @size: size of triangle.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j, space;

		for (i = 1; i <= size; i++)
		{
			for (space = size - i; space >0; space--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar("\n");
		}
}
