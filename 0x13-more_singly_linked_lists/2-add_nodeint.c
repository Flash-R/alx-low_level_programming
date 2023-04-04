#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add and integer node at the start
 * @head: head
 * @n: data
 * Return: address of new longer list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(node));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
