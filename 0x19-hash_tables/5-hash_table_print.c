#include "hash_tables.h"
/**
 * hash_table_print - print out the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int first_entry;
	hash_node_t *ht_node;
	unsigned long int i;

	first_entry = 1;
	if (ht == NULL)
		printf("{"
	for (i = 0; i < ht->size && ht != NULL; i++)
	{
		ht_node = ht->array[i];
		if (ht_node == NULL)
		{
			continue;
		}
		else
		{
			while (ht_node != NULL)
			{
				if (first_entry == 1)
				{
					printf("{'%s': '%s'",
					       ht_node->key, ht_node->value);
					first_entry = 0;
				}
				else
					printf(", '%s': '%s'",
					       ht_node->key, ht_node->value);
				ht_node = ht_node->next;
			}
		}
	}
	printf("}\n");

}
