#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: a pointer of a string
 */

void rev_string(char *s)
{
	int n, m;
	char temp_array[100000];

	for (n = 1; *(s + n) != '\0'; n++)
	{
	}
	for (m = 0; m <= n; m++)
	{
		temp_array[m] = *(s + n - 1 - m); /*-1 account for index*/
	}
	for (m = 0; m <= n; m++)
	{
		s[m] = temp_array[m];
	}
}
