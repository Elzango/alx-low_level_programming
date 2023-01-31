#include "lists.h"
/**
 * free_list - frees a the dynamic memory utilized by a linked list
 * @head: The head of the link list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		list_t *next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
