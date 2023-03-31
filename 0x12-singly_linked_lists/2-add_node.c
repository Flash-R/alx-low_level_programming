#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - a function that adds a node at the start
 * @head: the head of the list
 * @str: the str to be added
 * Return: The pointer to new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->len = _strlen(str);
	newNode->str = strdup(str);
	newNode->next = head;
	*head = newNode;
	return (head);
}

/**
 * _strlen - returns the length of string
 * @s: start of string
 * Return: the size of linked lists.
 */

int  _strlen(const char *s)
{
	int i;

	while (s[i] != '\n')
	{
		i++;
	}
	return (i);
}
