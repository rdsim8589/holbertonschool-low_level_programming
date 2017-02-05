#include "hash_tables.h"
/**
 * hash_table_print - print out the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *mv_node;

	if (ht == NULL)
		return;
	printf("{");
	for (j = i = 0; i < ht->size; i++)
	{
		mv_node = ht->array[i];
		while (mv_node != NULL)
		{
			printf("%s'%s': '%s'",  j==0 ? "": ", ", mv_node->key, mv_node->value);
			j ++;
			mv_node = mv_node->next;
		}
	}
	printf("}\n");

}
