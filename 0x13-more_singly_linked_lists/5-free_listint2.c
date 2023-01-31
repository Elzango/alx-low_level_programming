#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees the heap memory allocated dynamically to a given linked list
 * @head: The head of the given linked list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		listint_t *next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}
