#include "lists.h"
/**
 * add_dnodeint - Adds a node at the beginning of a given linked list
 * @head: The head of the given linked list
 * @n: Data to be added to the new node
 * Return: The adddress of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
