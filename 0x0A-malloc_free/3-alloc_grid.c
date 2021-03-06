#include <stdlib.h>

/**
 * alloc_grid - create a 2-d int array
 * @width: an int with the width of an 2-d array
 * @height: an int with the the height of a 2-d array
 *
 * Return: a pointer of a pointer to the 2-d array using malloc
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (height < 1)
		return (NULL);
	ar = malloc(height * sizeof(*ar));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
