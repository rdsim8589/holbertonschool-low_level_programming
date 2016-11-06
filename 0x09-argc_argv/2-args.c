#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguement it receives
 * @argc: count of arguments supplied to the program
 * @argv: pointer to an array of pointers.
 *
 * Return: 0 is complete
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
