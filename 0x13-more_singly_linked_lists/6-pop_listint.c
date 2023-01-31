#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a given linked list
 * @head: The head of the given linked list
 * Return: returns data contained in the head node
 */
#include "lists.h"
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
