#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the intergers in the list
 * @h: head of list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}

