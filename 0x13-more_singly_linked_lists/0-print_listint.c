#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the number of elements in a given linked list
 * @h: The head of the linked list
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
