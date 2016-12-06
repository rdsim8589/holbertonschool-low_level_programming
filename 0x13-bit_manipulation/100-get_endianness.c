#include "holberton.h"
/**
 * get_endianness - check the endianness
 *
 * Return: 1 if little endian and 0 if big endian
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
