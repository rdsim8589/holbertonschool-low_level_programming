#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of an int sq matrix
 * @a: the square matrix
 * @size: the length of the diagonal
 *
 * Return: the diagonal from top left to bottom right, top right to bottom left
 */

void print_diagsums(int *a, int size)
{
	int i, k;
	int one_diag, two_diag;

	k = size;
	one_diag = a[0];
	two_diag = a[size - 1];
	for (i = 1; i < size; i++)
	{
		one_diag += a[k + i];
		two_diag += a[k - i + size - 1];
		k += size;
	}
	printf("%d, %d\n", one_diag, two_diag);
}
