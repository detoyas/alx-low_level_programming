#include "main.h"

/**
 * _strncat - concatenates from a string to another
 * @dest: dest string
 * @src: src string
 * @n: number of bytes of str to concatenate
 *
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i])
		i++;
	
	
	while (src[j] != '\0')
	{
		dest[i++] = src[j];
		j++;
	}

	return (dest);
}
