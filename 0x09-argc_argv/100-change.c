#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the min number of coins needed to be returned
 * @argc: count of arguments supplied to the program
 * @argv: pointer to an array of pointers.
 *
 * Return: 1 is error, and 0 if it works
 */
int main(int argc, char **argv)
{
	int diff_coins[] = {25, 10, 5, 2, 1};
	int coin_total, i, num_of_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin_total = atoi(argv[1]);
	if (coin_total < 0)
	{
		printf("0\n");
		return (0);
	}
	num_of_coins = 0;
	i = 0;
	while (i < 5)
	{
		num_of_coins += coin_total / diff_coins[i];
		coin_total = coin_total % diff_coins[i];
		i++;
	}
	printf("%d\n", num_of_coins);
	return (0);
}
