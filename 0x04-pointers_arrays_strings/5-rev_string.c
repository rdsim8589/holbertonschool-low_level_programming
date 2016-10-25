#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s_ptr: a pointer of a string
 */

void rev_string(char *s_ptr)
{
	int n, m;
	char temp_array[100];

	for (n = 1; *(s_ptr + n) != '\0'; n++)
	{
	}
	for (m = 0; m <= n; m++)
	{
		temp_array[m] = *(s_ptr + n - 1 - m); /*-1 account for index*/
	}
	for (m = 0; m <= n; m++)
	{
		*(s_ptr + m) = temp_array[m];
	}
}
