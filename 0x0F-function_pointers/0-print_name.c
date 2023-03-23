#include <stdlib.h>

/**
 * print_name - print the name
 * @name: name to print
 * @f: the function to print the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
