#include "hash_tables.h"
/**
 * hash_table_set - Add or update an element to the hash table
 * @ht: A pointer to the hash table
 * @key: The key to add or update - cannot be an empty string.
 * @value: The value string to associate with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *cur_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Get the index at which the key/value pair should be stored in the array */
	index = key_index((unsigned char *)key, ht->size);

	/* allocate memory for a new hash node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* duplicate the key string and store them in the new hash node */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);

		return (0);
	}

	/* insert the new node at beginning of the linked list at the calculated index */
	cur_node = ht->array[index];
	ht->array[index] = new_node;
	new_node->next = cur_node;

	return (1);
}
