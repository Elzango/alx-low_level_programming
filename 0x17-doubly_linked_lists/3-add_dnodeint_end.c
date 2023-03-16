#include "lists.h"
/**
 * add_dnodeint_end - Add a new node to a given linked list at its end
 * @head: head of the given node
 * @n: Data to be added to the new node
 * Return: Address of the new element or NULL if it failled
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->n = n;
	if (*head == NULL) /*Covering edge case of empty list*/
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	temp->prev = ptr;
	return (temp);
}

