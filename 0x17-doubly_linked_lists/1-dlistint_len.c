#include "lists.h"
/**
 * dlistint_len - Determine the number of elements in a guven linked list
 * @h: The head of the linked list
 * Return: The number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

