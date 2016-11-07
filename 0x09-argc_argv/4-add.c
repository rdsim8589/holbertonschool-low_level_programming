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
	int i, j, add, check_num;

	i = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		check_num = atoi(argv[i]);
		if (check_num > 0)
		{
			add += check_num;
		}
		i++;
	}
	printf("%d\n", add);
	return (0);
}
