#include "hash_tables.h"

/**
 * hash_table_print - Prints the coontent of a hash table
 * @ht: The hash table to print
 *
 * Return: No return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 0;

	if (!ht)
		return;

	printf("{");

	/* going through the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* traversing the list */
		while (node)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
