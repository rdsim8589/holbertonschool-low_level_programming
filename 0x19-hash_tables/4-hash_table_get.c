#include "hash_tables.h"
/**
 * hash_table_get - retrieves the values by keys
 * @ht: the hash table
 * @key: the hash key
 *
 * Return: the string of the key value, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	hash_node = ht->array[index];
	if (hash_node == NULL)
	{
		return (NULL);
	}
	else
	{
		while (hash_node->key != key)
			hash_node = hash_node->next;
		return (hash_node->value);
	}
}
