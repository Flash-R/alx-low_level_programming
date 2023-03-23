#include "funtion_pointers.h"

/**
 * print_name - prints the name
 * @name: the name to be printed
 * @f: the function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
