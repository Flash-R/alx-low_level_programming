#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add the node to the end
 * @head: head
 * @n: value
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail;
	listint_t *node;

	node = malloc(sizeof(node));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*heade = node;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = node;
	}
	return (node);
}
