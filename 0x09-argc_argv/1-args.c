#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguements you pass it
 * @argc: count of arguments supplied to the program
 * @argv: pointer to an array of pointers.
 *
 *Return: 0 if complete
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
