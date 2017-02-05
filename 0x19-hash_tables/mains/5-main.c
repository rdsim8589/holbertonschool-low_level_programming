#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "value 1");
	hash_table_set(ht, "mentioner", "value 2");
	hash_table_set(ht, "heliotropes", "value 3");
	hash_table_set(ht, "neurospora", "value 4");
	hash_table_set(ht, "stylist", "value 5");
	hash_table_set(ht, "serafins", "value 6");
	hash_table_set(ht, "subgenera", "value 7");
	hash_table_set(ht, "synaphea", "value 8");
	hash_table_set(ht, "joyful", "value 9");
	hash_table_set(ht, "redescribed", "value 10");
	hash_table_set(ht, "urites", "value 11");
	hash_table_set(ht, "dram", "value 12");
	hash_table_set(ht, "vivency", "value 13");
	hash_table_set(ht, "serafins", "replaced!");
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
