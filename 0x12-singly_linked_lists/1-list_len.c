#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the length of linked lists
 * @h: Header file
 * Return: the number of items
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
