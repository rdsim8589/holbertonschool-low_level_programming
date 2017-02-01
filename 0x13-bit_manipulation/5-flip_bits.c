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
		if ((n & 1) != (m & 1))
			flip++;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}
