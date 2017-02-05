#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash tabnle
 * ht: the pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{

	unsigned long int i;
	hash_node_t *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				tmp = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}

	}
	free(ht->array);
	free(ht);
}
