#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints the length of the list
 * @h: head of list
 * Return: number of items
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
