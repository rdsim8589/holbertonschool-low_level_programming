#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: a pointer to a string
 *
 * Return: the pointer to the string created with malloc
 */
char *_strdup(char *str)
{
	char *ar;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ar = malloc(i * sizeof(char));
	if (ar == NULL)
		free (ar);
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		ar[j] = str[j];
	}
	return (ar);
}
