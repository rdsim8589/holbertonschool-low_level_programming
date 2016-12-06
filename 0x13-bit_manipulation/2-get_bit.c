#include "holberton.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: a number
 * @index: the index if starting from the 0 place
 *
 * Return: the value of a bit at a given index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int compare;

	if (index > 8 * sizeof(n))
		return (-1);
	compare = 1;
	if (n & (compare << index))
		return (1);
	return (0);
}
