#include "main.h"
#include "stdlib"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}