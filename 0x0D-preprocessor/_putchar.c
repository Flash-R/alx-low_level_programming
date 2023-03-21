#include <unistd.h>

/*
 * _putchar - print a character on std output
 * @c: the character to be printed
 * Return: the character
 * On error - -1 it prints and error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
