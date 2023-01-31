#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_mode - add a new node at the beginning of a linked list
 * @head: head of the linked list
 * @str: The given string as an element to the node
 * Return: returns the address of the new node or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int len;
	char *s;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	ptr->str = s;
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
