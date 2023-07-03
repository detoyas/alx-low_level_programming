#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to assign for each byte
 * @n: number of bytes
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
