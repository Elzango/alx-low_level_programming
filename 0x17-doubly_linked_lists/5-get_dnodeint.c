#include "lists.h"
/**
 * get_dnodeint_at_index - Determing a particular node from a linked list
 * giving its index starting from 0
 * @head: The head of the giving list
 * @index: The index of a given list starting from zero
 * Return: returns the nth node of a dlistint_t linked list or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (n == index)
			return (head);
		n++;
		head = head->next;
	}
	return (head);
}
