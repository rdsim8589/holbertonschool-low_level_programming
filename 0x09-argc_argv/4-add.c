#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add all postive numbers
 * @argc: count of arguments supplied to the program
 * @argv: pointer to an array of pointers.
 *
 * Return: 0 or 1 is complete
 */
int main(int argc, char **argv)
{
	int i, add, check_num;

	i = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		check_num = atoi(argv[i]);
		if (check_num > 0)
		{
			add += check_num;
		}
		else if (*argv[i] == '0')
		{
			add += atoi(argv[i]);		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", add);
	return (0);
}
