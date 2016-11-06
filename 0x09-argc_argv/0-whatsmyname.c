#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints it's own name
 * @argc: count of arguments supplied to the program
 * @argv: pointer to an array of pointers.
 *
 *Return: 0 is complete
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
