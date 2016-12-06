#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: an int
 * @m: an int
 *
 * Return: the number of bits you would need to flip to get from one
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip, i;

	flip = 0;
	for (i = 0; i < (8 * sizeof(n)); i++)
	{
		if (get_bit(n, 0) != get_bit(m, 0))
			flip++;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}

/**
 * get_bit - return the value of a bit at a given index
 * @n: a number
 * @index: the index if starting from the 0 place
 *
 * Return: the value of a bit at a given index or -1 if it fails.
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
