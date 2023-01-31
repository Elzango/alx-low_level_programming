#include "lists.h"
/**
 * listint_len - Determine the number of elements in a given linked list
 * @h: The head of the linked list
 * Return: returns the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
