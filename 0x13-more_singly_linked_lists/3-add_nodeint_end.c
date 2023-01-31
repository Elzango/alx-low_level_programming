#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a node at the end of a given linked list
 * @head: The head of the given linked list
 * @n: An integer element of a node
 * Return: Returns the address of the new element otherwise NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
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
