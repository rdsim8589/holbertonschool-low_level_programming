#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - print the first continous set of int values of a string
 * @s: a pointer of a str
 *
 * Return: an int type of the first continous set of int values of s
 */

int _atoi(char *s)
{
	int n, new_int, sign;

	sign = 0;
	new_int = 0;
	for (n = 0; *(s + n) != '\0'; n++)
	{
		if (s[n] == '-')
		{
			sign--;
		}
		else if (s[n] == '+')
		{
			sign++;
		}
		if (s[n] >= '0' && s[n] <= '9')
		{
			new_int = new_int * 10 + (s[n] -'0');
		}
		else if (new_int > 0)
		{
			break;
		}
	}
	if (sign < 0)
		sign = -1;
	else
		sign = 1;
	return (new_int * sign);
}
