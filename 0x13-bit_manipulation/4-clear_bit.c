#include "holberton.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: an int
 * @index: the index where the bit will be changed
 *
 * Return: 1 if it works, -1 if errors
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = (*n) & (~(1 << index));
	return (1);

}
