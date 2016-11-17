#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sums the a and b
 * @a: an int a
 * @b: an int b
 *
 * Return: the addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract a and b
 * @a: an int a
 * @b: an int b
 *
 * Return: the subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiple a and b
 * @a: an int a
 * @b: an int b
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divsion of a by b
 * @a: an int a
 * @b: an int b
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - a % b
 * @a: an int a
 * @b: an int b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
