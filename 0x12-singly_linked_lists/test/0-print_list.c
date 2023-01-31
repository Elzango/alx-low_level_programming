#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements in a linked list
 * @h: the head of the linked list
 * Return: return number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s [%d]\n", h->str, h->len);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
