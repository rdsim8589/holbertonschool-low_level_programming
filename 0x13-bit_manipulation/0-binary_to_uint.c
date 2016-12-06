#include "holberton.h"
/**
 * binary_to_uint - convert binary numbers into unsigned ints
 * @b: is point to a string of 1 and 0
 *
 * Return: returns the converted number or 0 if one more characters aren't 0,
 * or 1, of if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, str_len;
	unsigned int uint, binary_multi;

	/* check if char * is valid */
	if (b == NULL)
		return (0);
	for (str_len = 0; b[str_len] != '\0'; str_len++)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);
	}

	/* convert char * to Binary */
	uint = 0;
	binary_multi = 1;
	i = str_len - 1;
	while (i >= 0)
	{
		if (b[i] == '1')
			uint += binary_multi;
		i--;
		binary_multi *= 2;
	}
	return (uint);
}
