#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that multiples two arguements together
 * @argc: count of arguments supplied to the program
 * @argv: pointer to an array of pointers.
 *
 * Return: 1 is complete
 */
int main(int argc, char **argv)
{
	int multi;

	if (argc -1 == 2)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
