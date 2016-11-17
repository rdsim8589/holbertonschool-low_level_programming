#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the mathematical operation
 * @argc: the number of arguments that it takes in
 * @argv: a pointer to a string of arguments
 *
 * Return: 0 if complete
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] >= '0' && argv[1][0] <= '9'
	    && argv[3][0] >= '0' && argv[3][0] <= '9')
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", get_op_func(argv[2]) (num1, num2));
	}
	return (0);
}
