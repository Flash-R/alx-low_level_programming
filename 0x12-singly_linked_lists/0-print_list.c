#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the length of the linked list
 * @h: the head of the linked list
 * Return: the number of items
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			len++;
		}
		else
		{
			printf("[%u] %s \n", h->len, h->str);
			len++;
		}
	}
	return (len);
}
