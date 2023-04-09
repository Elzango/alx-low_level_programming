#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key string to hash
 * @size: Size of the hash table array
 *
 * Return: Index at which the key/value pair should be stored
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Get the hash value using the djb2 algorithm */
	hash_value = hash_djb2(key);

	/* Calculate the index by taking the modulus of the hash value with the hash tablle size */
	return (hash_value % size);
}
