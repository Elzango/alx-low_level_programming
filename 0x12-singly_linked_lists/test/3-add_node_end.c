#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stdbool.h>
/**
 * add_node_at_end - Adds a new node at the end of a given link list
 * @head: The head of the given linked list
 * @str: The string element/member of the linked list
 * Return: returns the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	char *s;
	unsigned int len;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	temp->len = len;
	temp->str = s;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (*head);
}
