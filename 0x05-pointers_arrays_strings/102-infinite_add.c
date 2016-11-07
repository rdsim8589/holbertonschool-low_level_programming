#include "holberton.h"
/**
 * length_of - finds the length of a string
 * @p: pointer to the char type string of a number
 *
 * Return: the length of a string
 */

int len_of(char *p)
{
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		i++;
	}
	return(i)
}

/**
 * find_small - find the smaller size between two strings
 * @n1: pointer to a string
 * @n2: pointer to a string
 *
 * Return: the pointer to a char type of the smaller size
 */

char *find_smaller(*n1, *n2)
{
	if (len_of(n1) > len_of(n2))
	{
		return (n2);
	}
	else
	{
		return (n1);
	}
}

/**
 * find_large - the larger size between two strings
 * @n1: pointer to a string
 * @n2: pointer to a string
 *
 * Return: the pointer to a char type of the larger size
 */

char *find_larger(*n1, *n2)
{
	if (len_of(n1) >= len_of(n2))
	{
		return (n1);
	}
	else
	{
		return (n2);
	}
}

/**
 * n_sum_len - finds the actual length of two strings
 * @n1: pointer to a string
 * @n2: pointer to a string
 *
 * Return: an int type of the len of the string
 */
int n_sum_len(*larger_n, *smaller_n)
{
	int i, j;

	i = j = 0;
	while (i < len_of(larger_n))
	{
		if ((len_of(larger_n) - i) < len_of(smaller_n))
		{
			if (larger_n[i] + (smaller_n[j] - '0') = '9')
			{
				j++;
				i++;
			}
			else if (larger_n[i] + (smaller_n[j] - '0') < '9')
			{
				return (len_of(larger_n));
			}
			else
			{
				return (len_of(larger_n) + 1);
			}
		}
		else
		{
			if (larger_n[i] == '9')
			{
				i++;
			}
			else
			{
				return (len_of(larger_n));
			}
		}
	}
}

/**
 * infinite_add - adding two number of any size
 * @n1: pointer to the char type string of numbers
 * @n2: pointer to the char type string of numbers
 * @r: point to the char type that stores the buffer
 * @size_r: the size of the buffer
 **
 * Return:  pointer to the type char, variable r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *larger_n, *smaller_n;
	int i, j, len_of_sum, add, lg_n_len, sm_n_len;

	l_n = find_larger(n1, n2);
	s_n = find_smaller(n1, n2);
	lg_n_len = len_of(larg_n);
	sm_n_len = len_of(small_n);
	len_of_sum = n_sum_len(larger_n, smaller_n);
	i = j = 1;
	if (len_of(larger_n) > size_r || len_of_sum > size_r)
	{
		return (0)
	}
	while(i < len_of_sum)
	{
		if (j <= sm_n_len)
		{
			add = l_n[lg_n_len - i] + s_n[sm_n_len - j] - 92 + rem;
			r[len_of_sum - i] = add%10 + '0';
			rem = add/10;
			j++;
		}
		else
		{
			add = larg_n[lg_n_len - i] - '0' + rem;
			r[len_of_sum - i] = add%10 + '0';
			rem = 0;
			j++;
		}
		i++;
	}
	return (r);
}
