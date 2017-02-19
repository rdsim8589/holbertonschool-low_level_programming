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
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "USA", "Washington");
	hash_table_set(ht, "Canada", "Ottawa");

	value = hash_table_get(ht, "USA");
	printf("%s:%s\n", "USA", value);


	value = hash_table_get(ht, "Canada");
	printf("%s:%s\n", "Canada", value);

/*	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Jennie", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");
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


	value = hash_table_get(ht, "neurospora");
	printf("%s:%s\n", "neurospora", value);
	value =	hash_table_get(ht, "stylist");
	printf("%s:%s\n", "stylist", value);
	value =	hash_table_get(ht, "serafins");
	printf("%s:%s\n", "serafins", value);
	value =	hash_table_get(ht, "subgenera");
	printf("%s:%s\n", "subgenera", value);
	value =	hash_table_get(ht, "synaphea");
	printf("%s:%s\n", "synaphea", value);
	value =	hash_table_get(ht, "joyful");
	printf("%s:%s\n", "joyful", value);
	value =	hash_table_get(ht, "redescribed");
	printf("%s:%s\n",  "redescribed", value);
	value =	hash_table_get(ht, "urites");
	printf("%s:%s\n", "urites", value);
	value =	hash_table_get(ht, "dram");
	printf("%s:%s\n", "dram", value);
	value =	hash_table_get(ht, "vivency");
	printf("%s:%s\n", "vivency", value);

	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "Jennie");
	printf("%s:%s\n", "Jennie", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98");
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "c");
	printf("%s:%s\n", "c", value);
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\n", "javascript", value);
*/	return (EXIT_SUCCESS);
}
