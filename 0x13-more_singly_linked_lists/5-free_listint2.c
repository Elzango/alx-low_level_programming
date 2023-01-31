#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees the heap memory allocated dynamically to a given linked list
 * @head: The head of the given linked list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
