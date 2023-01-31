#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees the dynamic memory allocated to a given node in a given linked list
 * @head: The head of the guven linked list
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
