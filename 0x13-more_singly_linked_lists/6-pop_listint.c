#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - removes the head
 * @head: heat
 * Return: the removed value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	if (*head->next == NULL)
		return (*head->n);
	temp = *head;
	*head = *head->next;
	n = temp->n;
	temp->next = NULL;
	free(temp);

	return (n);
}
