#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the has table
 * @key: hash key
 * @value: hash value associated with the key
 *
 * Return: 1 if success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *scanner_idx;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	scanner_idx = ht->array[index];
	if (ht->array[index] == NULL)
	{
		ht->array[index] = chk_ht_node(key, value);
		if (ht->array[index] == NULL)
			return (0);
	}
	else
	{
		scanner_idx = scan_ht_check(scanner_idx, key);
		if (scanner_idx != NULL)
		{
			free(scanner_idx->value);
			scanner_idx->value = strdup(value);
			if (scanner_idx->value == NULL)
				return (0);
		}
		else
		{
			node = chk_ht_node(key, value);
			if (node == NULL)
				return (0);
			if (!prepend_node(&(ht->array[index]), node))
				return (0);
		}
	}
	return (1);
}


/**
 * chk_ht_node - creates dups of key and value
 * @key: The hash key
 * @val: The hash value
 *
 * Return: the pointer to the hash_node_t
 */
hash_node_t *chk_ht_node(const char *key, const char *val)
{
	hash_node_t *node;
	char *val_cpy, *key_cpy;

	val_cpy = strdup(val);
	if (val_cpy == NULL)
		return (NULL);
	key_cpy = strdup(key);
	if (key_cpy == NULL)
	{
		free(val_cpy);
		return (NULL);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(key_cpy);
		free(val_cpy);
		return (NULL);
	}
	node->key = key_cpy;
	node->value = val_cpy;
	node->next = NULL;
	return (node);
}
hash_node_t* scan_ht_check(hash_node_t* scanner_idx, const char *key)
{
	while (scanner_idx != NULL)
	{
		if (strcmp(scanner_idx->key, key) == 0)
		{
			return (scanner_idx);
		}
		scanner_idx = scanner_idx->next;
	}
	return (NULL);

}

int prepend_node(hash_node_t** head, hash_node_t* node)
{
	if (*head == NULL || node == NULL)
		return (0);
	node->next = *head;
	*head = node;
	return (1);
}
