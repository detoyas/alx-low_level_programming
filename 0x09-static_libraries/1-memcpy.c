#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @src: source to copy from
 * @dest: destination to copy into
 * @n: length in bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n > 0)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
		n--;
	}
	return (dest);
}
