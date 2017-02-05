#include "hash_tables.h"
/**
 * hash_table_print - print out the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int first_entry;
	unsigned long int i, ht_all_null;
	hash_node_t *mv_node;

	if (ht == NULL)
		return;
	ht_all_null = first_entry = 1;
	for (i = 0; i < ht->size; i++)
	{
		mv_node = ht->array[i];
		if (mv_node != NULL)
		{
			ht_all_null = 0;
			while (mv_node != NULL)
			{
				if (first_entry == 1)
				{
					printf("{'%s': '%s'",
					       mv_node->key,
					       mv_node->value);
					first_entry = 0;
				}
				else
				{
					printf(", '%s': '%s'",
					       mv_node->key,
					       mv_node->value);
				}
				mv_node = mv_node->next;
			}
		}
	}
	if (ht_all_null == 1)
		printf("{");
	printf("}\n");

}
