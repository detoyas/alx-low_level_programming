#include "main.h"

/**
 * _islower - function that checks if c is lowercase
 * @c: character to check
 *
 * Return: returns 1 if lowercase
 *         returns 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
