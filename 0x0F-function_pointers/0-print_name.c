#include <stdlib.h>
#include "funtion_pointers.h"

/**
 * print_name - prints the name
 * @name: the name to be printed
 * @f: the function that prints the name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 || f != 0)
		f(name);
}
