#include "lists.h"
/**
 * free_dlistint - frees a the dynamically allocated memory of given list
 * @head: The head of the given list
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

