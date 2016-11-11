#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings together
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of string c
 *
 * Return: the char pointer of malloc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int size_i, j, size_array;
	unsigned int k;

	for (size_i = 0; s1[size_i] != '\0'; size_i++)
	{
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
	}
	if (n > k)
		n = k - 1;

	size_array = size_i + n + 1;
	array = malloc(size_array * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (j = 0; j < size_array; j++)
	{
		if (j < size_i)
		{
			array[j] = s1[j];

		}
		else if (j == size_array - 1)
		{
			array[j] = '\0';
		}
		else
		{
			array[j] = s2[j - size_i];
		}
	}
	return (array);
}
