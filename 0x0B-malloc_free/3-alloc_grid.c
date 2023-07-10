#include "main.h"

/**
 * alloc_grid - returns a pointer to 2 dimensional arr of ints
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
