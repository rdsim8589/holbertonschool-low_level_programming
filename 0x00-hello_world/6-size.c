#include <stdio.h>
/**
 * main - prints the size of various types
 * Description: prints the size of a char, int, long int,
 * long long int, and float
 * Return: size32 
 *Size of a char: 1 byte(s)
 *Size of an int: 4 byte(s)
 *Size of a long int: 4 byte(s)
 *Size of a long long int: 8 byte(s)
 *Size of a float: 4 byte(s)
 *
 *size64
 *Size of a char: 1 byte(s)
 *Size of an int: 4 byte(s)
 *Size of a long int: 8 byte(s)
 *Size of a long long int: 8 byte(s)
 *Size of a float: 4 byte(s)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int z;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
