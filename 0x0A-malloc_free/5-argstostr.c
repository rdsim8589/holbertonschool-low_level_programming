#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: arugment value. A pointer of a pointer to a string
 *
 * Return: returns a pointer to a char using
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int i, j, ary_i, str_count;

	if (av == 0 || av == NULL)
		return (NULL);
/*find the size of all the strings in av*/
	str_count = i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		str_count += (j + 1);
		i++;
	}
	str_count += 1;

	array = malloc(str_count * sizeof(char));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
/*main part of argstostr*/
	ary_i = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			array[ary_i] = av[i][j];
			ary_i++;
		}
		array[ary_i] = '\n';
		ary_i++;
	}
	array[ary_i] = '\0';
	return (array);
}
