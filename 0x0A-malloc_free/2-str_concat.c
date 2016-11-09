#include <stdlib.h>

/**
 * _strlen - finds the len of a string
 * @s: a pointer to a string
 *
 * Return: an int with the len of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * str_concat - concatenates two strings
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 *
 * Return: a pointer to an array created with malloc
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int total_len, i, j, ar_i;
	char *strs[2];

	if (s1 == NULL || s2 == NULL)
		return  NULL);
	strs[0] = s1;
	strs[1] = s2;
	total_len = _strlen(s1) + _strlen(s2) + 1;
	ar = malloc(total_len * sizeof(char));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	ar_i = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < _strlen(strs[i]); j++)
		{
			ar[ar_i] = strs[i][j];
			ar_i++;
		}
	}
	ar[ar_i] = '\0';
	return (ar);
}
