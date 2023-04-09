#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Return: No return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (!node)
		{
			hash_node_t *next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}
