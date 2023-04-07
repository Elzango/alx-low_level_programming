#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * 0-hash_table_create - creates a new hash table
 * @size: The size of the array
 * Return: A pointer to the new hash table or NULL if in case of failure
 */
hash_table_t *hash_table(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	hash_node_t **array = NULL;

	/* Allocate memory for the hash table structure */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* Allocate memory for the array of hash_node_t pointers */
	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);

	/* Initiate the hash table structure */
	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}
