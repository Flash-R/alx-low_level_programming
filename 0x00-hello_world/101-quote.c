#include <stdio.h>
#include <unistd.h>
/**
 * Description: main - contains the content to be displayed on stdout
 * Return: Always 0 whn success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
