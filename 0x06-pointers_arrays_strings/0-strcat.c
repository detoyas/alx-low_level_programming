#include "main.h"

/**
 * _strncat - concatenates from a string to another
 * @dest: dest string
 * @src: src string
 * @n: number of bytes of str to concatenate
 *
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j;

	}
	dest[i + j] = '\0';

	return (dest);
}

