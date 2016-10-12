#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: "Programming is like building a multilingual puzzle
 */
int main(void)
{
	char c;	
	int i;
	long int l;
	long long int z;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
