#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the number of elements in a given linked list
 * @h: The head of the linked list
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
