#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a given linked list
 * @head: The head of the given linked list
 * Return: returns data contained in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	if (*head == NULL)
		return (0);
	else if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		temp = malloc(sizeof(listint_t));
		temp = *head;
		m = (*head)->n;
		*head = (*head)->next;
		free(temp);
		temp = NULL;;
	}
	return (m);
}
