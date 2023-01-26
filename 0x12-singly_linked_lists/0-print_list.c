#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements in all nodes of a linked list
 * @h: head pointer of the list
 * Return: returns the number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
