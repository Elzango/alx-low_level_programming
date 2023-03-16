#include "lists.h"
/**
 * insert_dnodeint - Insert a new node at a given position in a linked list
 * @h: A pointer to the first node on the list
 * @idx: Index position on the list to insert the new node
 * @n: The new data on the new node to be inserted
 * Return: The address of the new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr1, *ptr2, *temp;

	temp = malloc(sizeof(dlistint_t));
	temp->next = NULL;
	temp->prev = NULL;
	temp->n = n;
	ptr2 = NULL;
	
	ptr1 = *h;

	if (idx == 0)
		return (NULL);

	while (idx != 1)
	{
		ptr1 = ptr1->next;
		idx--;
	}

	if (ptr1->next == NULL)
	{
		ptr1->next = temp;
		temp->prev = ptr1;
	}
	else
	{
		ptr2 = ptr1->next;
		ptr1->next = temp;
		ptr2->prev = temp;
		temp->prev = ptr1;
		temp->next = ptr2;
	}
	return (temp);
}
