#include "main.h"

/**
 * _strcat - concatenates from a string to another
 * @dest: dest string
 * @src: src string
 *
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
