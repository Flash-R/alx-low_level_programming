#include "main.h"
/**
 * print_triangle - prints a triangle of size size.
 * @size: size of the triangle
 *
 * return: void
 *
*/
void print_triangle(int size){
    for (int i = 1; i <= size; i++) {
        for (int k = size - i; k >0; k--) {
            _putchar(" ");
        }
        for (int j = 1; j <= i; j++) {
            _putchar("#");
        }
        _putchar("\n");

    }
    return;
}
