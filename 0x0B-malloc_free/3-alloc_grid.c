#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the array width.
 * @height: the array height.
 *
 * Return: array pointer of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptrr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ptrr = malloc(height * sizeof(int *));
	if (ptrr == NULL)
	{
		free(ptrr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptrr[i] = malloc(width * sizeof(int));
		if (ptrr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptrr[i]);
			free(ptrr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptrr[i][j] = 0;

	return (ptrr);
}
