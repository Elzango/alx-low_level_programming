#include <stdio.h>
#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: head of the linked list
 * Return: return the number of elements in a given linked list
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while(h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
