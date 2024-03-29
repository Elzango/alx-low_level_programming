#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Add a node at the beginning of a given linked list
 * @head: The head of the given linked list
 * @n: an integer of the elements inside the linked list
 * Return: The address of the new element otherwise NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
