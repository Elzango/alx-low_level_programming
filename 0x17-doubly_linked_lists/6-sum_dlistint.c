#include "lists.h"
/**
 * sum_dlistint - Determine the sum of all the data (n) of a given list
 * @head: A pointer to the first node of the list
 * Return: Returns the sum of all the data (n) of a guven linked list or 0 when empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
