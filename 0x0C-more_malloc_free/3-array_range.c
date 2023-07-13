#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min of arrange
 * @max: max of arrays
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int len;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
