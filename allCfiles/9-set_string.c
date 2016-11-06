#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a pointer of a char
 * @to: setting the pointer of the pointer to the pointer to
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
